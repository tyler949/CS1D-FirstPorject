#include "shopforwine.h"
#include "ui_shopforwine.h"
#include <QListWidgetItem>
#include <QSpinBox>
#include <QGroupBox>
#include <QComboBox>
#include <QStandardItem>
#include "winetype.h"
#include "tourwineries.h"
#include <QDebug>
shopForWine::shopForWine(QWidget *parent,int currentWineryIndex,vector<WineryClass> *wineryVector, vector<winePurchase> *purchases) :
    QDialog(parent),
    ui(new Ui::shopForWine)
{
    ui->setupUi(this);
    mainMenu           = parent;
    wineryList         = wineryVector;
    currentWinery      = currentWineryIndex;
    totalWinePurchases = purchases;

    // Set table columns, header, and remove vertical header
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Quantity"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Wine Name"));
    ui->tableWidget->verticalHeader()->setVisible(false);

    // Get wines from current winery
    vector<wineType> *wineTypes;
    wineTypes = wineryList->at(currentWinery).getWines();

    // Each each wine to the table
    for(int i=0; i < wineTypes->size(); i++)
    {
        ui->tableWidget->insertRow(i);
        QSpinBox *spinBox = new QSpinBox(ui->tableWidget);
        ui->tableWidget->setCellWidget(i,0,spinBox);
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(wineTypes->at(i).getName())));
    }
}
shopForWine::~shopForWine()
{
    delete ui;
}

void shopForWine::on_addWineToOrder_clicked()
{
    // Get wines of winery list
    vector<wineType> *wineTypes;
    wineTypes = wineryList->at(currentWinery).getWines();

    // Quantity of wines
    int quantity;
    QSpinBox *sp;
    // Get each wine value and add it to order if greater than 0
    for(int i = 0; i < wineTypes->size(); i++)
    {
        sp = (QSpinBox*)ui->tableWidget->cellWidget(i,0);
        quantity = sp->value();
        if (quantity > 0)
        {
            winePurchase winePur;
            winePur.wineTypeIndex = i;
            winePur.wineryIndex   = currentWinery;
            winePur.quantity      = quantity;
            totalWinePurchases->push_back(winePur);
        }
    }
    tourWineries *tour;
    tour = new tourWineries(mainMenu,currentWinery,wineryList,totalWinePurchases);
    tour->show();
    this->hide();

}
