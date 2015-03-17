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
shopForWine::shopForWine(QWidget *parent,vector<WineryClass> *originalList,int currentWineryIndex,vector<WineryClass> *wineryVector, vector<winePurchase> *purchases) :
    QDialog(parent),
    ui(new Ui::shopForWine)
{
    ui->setupUi(this);
    // Set winery list, current winery,
    // total wine purchases and original winery list
    mainMenu           = parent;
    wineryList         = wineryVector;
    currentWinery      = currentWineryIndex;
    totalWinePurchases = purchases;
    originalWineryList = originalList;

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
        // If quantity is more than one then add this as a purchase
        // by adding the quantity, current winery, etc.
        if (quantity > 0)
        {
            winePurchase winePur;
            winePur.wineTypeIndex = i;
            winePur.wineryIndex   = currentWinery;
            winePur.quantity      = quantity;
            totalWinePurchases->push_back(winePur);
        }
    }

    // Show tour wineries
    tourWineries *tour;
    tour = new tourWineries(mainMenu,originalWineryList,currentWinery,wineryList,totalWinePurchases);
    this->reject();
    tour->show();

}
