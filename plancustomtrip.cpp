#include "plancustomtrip.h"
#include "ui_plancustomtrip.h"
#include <QCheckBox>
#include <QStandardItemModel>
#include <QModelIndex>
#include <QListWidgetItem>
#include "mainwindow.h"
#include <QDebug>
planCustomTrip::planCustomTrip(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::planCustomTrip)
{
    ui->setupUi(this);
    mainMenu = parent;
    wineryList = firstVec;



    for(int i = 0; i<wineryList->size();i++)
    {
        QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(wineryList->at(i).getWineryName()), ui->listWidget);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
        item->setCheckState(Qt::Unchecked); // AND initialize check state
    }
}

planCustomTrip::~planCustomTrip()
{
    delete ui;
}
void updateVector(vector<WineryClass> orginal, vector<WineryClass> &newVec)
{
    int key;
    for(int i = 0; i < newVec.size(); i++)
    {
        newVec.at(i).distanceClear();
    }
    for(int i = 0; i < newVec.size(); i++)
    {
        key = newVec.at(i).getWineryNumber() -1;
        for(int j = 0; j < newVec.size(); j++)
        {

            newVec.at(j).addDistance(orginal.at(newVec.at(j).getWineryNumber() - 1).getDistance(key));
        }
    }
    /*for(int i = 0; i < newVec.size(); i ++)
    {
        newVec.at(i).setWineryNumber((i + 1));
    }*/
    qDebug() << "*********** IN FUNCTION ";
    for(int i = 0; i < newVec.size(); i++)
    {
        qDebug() << QString::number(newVec.at(i).getWineryNumber());
        qDebug() << "NAMES: " << QString::fromStdString(newVec.at(i).getWineryName());
    }
    qDebug() << "************ IN FUNCTION 2";
    for(int i = 0; i < newVec.size(); i++)
    {
        qDebug() << QString::number(newVec.at(i).getWineryNumber());
        qDebug() << "NAMES: " << QString::fromStdString(orginal.at(newVec.at(i).getWineryNumber()-1).getWineryName());
    }
}
void planCustomTrip::on_pushButton_clicked()
{
    // Vector for list of wineries to visit
    vector<WineryClass> wineriesToVisit;
    vector<int> wineriesPass;

    // Reset errors
    ui->noWineriesSelected->setText("");
    ui->noWineriesSelected->setStyleSheet("");

    for(int row = 0; row < ui->listWidget->count(); row++)
    {
        // Check if item is checked. If so, add to vector
        // of wineries to visit
        if (ui->listWidget->item(row)->checkState() == Qt::Checked)
        {
            wineriesToVisit.push_back(wineryList->at(row));
            qDebug() << "SELECTED : " << wineryList->at(row).getWineryNumber();
        }

    }
    if (wineriesToVisit.empty())
    {
        ui->noWineriesSelected->setText("Please select at least one winery to visit");
        ui->noWineriesSelected->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
    }
    else
    {
        updateVector(*wineryList,wineriesToVisit);

        for(int i = 0; i < wineriesToVisit.size(); i++)
        {
            wineriesPass.push_back(wineriesToVisit.at(i).getWineryNumber()-1);
        }
        tripDisplay = new DisplayTrip(mainMenu,wineryList,0,0,&wineriesPass,&wineriesToVisit);
        this->reject();
        tripDisplay->show();


    }
}
