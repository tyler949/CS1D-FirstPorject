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
    qDebug() << "SIZE SHOP: " << wineryVector->size();
    ui->setupUi(this);
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
    qDebug() << "ENTERED";
    // Get wines of winery list
    vector<wineType> *wineTypes;
    wineTypes = wineryList->at(currentWinery).getWines();
    qDebug() << "NUMBER OF WINE TYPES: " << wineTypes->size();
    qDebug() << "WINE NAME: " << QString::fromStdString(wineTypes->at(0).getName());
    // Quantity of wines
    int quantity;
    QSpinBox *sp;
    qDebug() << "TOTAL : " << totalWinePurchases->size();
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
    tour = new tourWineries(mainMenu,originalWineryList,currentWinery,wineryList,totalWinePurchases);
    this->reject();
    tour->show();

}
