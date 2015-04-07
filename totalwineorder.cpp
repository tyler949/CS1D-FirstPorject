#include "totalwineorder.h"
#include "ui_totalwineorder.h"
#include "mainwindow.h"
#include <QDebug>
#include "paymentinfo.h"

totalWineOrder::totalWineOrder(QWidget *parent,vector<WineryClass> *originalList,vector<WineryClass> *listOfWineries, vector<winePurchase> *purchases) :
    QDialog(parent),
    ui(new Ui::totalWineOrder)
{
    // Assign the winery list and wine purchases
    wineryList         = listOfWineries;
    totalWinePurchases = purchases;
    originalWineryList = originalList;
    // Initialize wines vector and wine type index
    vector<wineType> *wineTypes;
    int wineTypeIndex;
    int wineryIndex;
    int totalPrice;
    int totalAllCost = 0;

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
        // Get wines of that winery
        vector<wineType> *wineTypes;
        wineTypes = wineryList->at(totalWinePurchases->at(i).wineryIndex).getWines();
        wineTypeIndex = totalWinePurchases->at(i).wineTypeIndex;
        wineryIndex = totalWinePurchases->at(i).wineryIndex;
        totalPrice  = wineTypes->at(wineTypeIndex).getCost() * totalWinePurchases->at(i).quantity;
        // Get total cost
        totalAllCost+= totalPrice;

        // Insert each winery in the table
        // table consts of:
        // Quantity---Winery name----Wine name----Wine Year---Cost
        // All of this is taken from the winePurchase struct and is in a vector
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(totalWinePurchases->at(i).quantity)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(wineryList->at(wineryIndex).getWineryName())));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::fromStdString(wineTypes->at(wineTypeIndex).getName())));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(wineTypes->at(wineTypeIndex).getYear())));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(wineTypes->at(wineTypeIndex).getCost())));

        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString("$")+QString::number(totalPrice)));
    }
    ui->lineEdit->setText(QString("$")+QString::number(totalAllCost));

    orderTotal = totalAllCost;

    // If not total, then just show "Back to main menu"
    if (orderTotal <= 0)
        ui->pushButton->setText("Back To Main Menu");
}

totalWineOrder::~totalWineOrder()
{
    delete ui;
}

void totalWineOrder::on_pushButton_clicked()
{
    if (orderTotal <= 0 )
    {
        // If there is no total then just go back to menu
        MainWindow *main = new MainWindow(0,originalWineryList);
        this->reject();
        main->show();
    }
    else
    {
        // If there is total then pay up! Go to pay screen
        paymentinfo *payment = new paymentinfo;
        this->reject();
        payment->show();
    }
}
