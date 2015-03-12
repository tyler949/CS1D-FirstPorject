#include "totalwineorder.h"
#include "ui_totalwineorder.h"

totalWineOrder::totalWineOrder(QWidget *parent,vector<WineryClass> *listOfWineries, vector<winePurchase> *purchases) :
    QDialog(parent),
    ui(new Ui::totalWineOrder)
{
    // Assign the winery list and wine purchases
    wineryList         = listOfWineries;
    totalWinePurchases = purchases;

    ui->setupUi(this);
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Quantity"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Winery"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("Year"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("Wine"));
    ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("Price"));
    ui->tableWidget->setHorizontalHeaderItem(5,new QTableWidgetItem("Total"));
    ui->tableWidget->verticalHeader()->setVisible(false);

    for(int i=0; i < totalWinePurchases->size(); i++)
    {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(totalWinePurchases->at(i).quantity)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem("Call winery name"));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem("2000"));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(totalWinePurchases->at(i).wineTypeIndex)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem("get price"));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem("get total"));
    }
}

totalWineOrder::~totalWineOrder()
{
    delete ui;
}
