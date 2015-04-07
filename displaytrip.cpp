#include "displaytrip.h"
#include "ui_displaytrip.h"
#include "mainwindow.h"

displaytrip::displaytrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displaytrip)
{
    ui->setupUi(this);
<<<<<<< HEAD
=======
    mainMenu     = parent;
    wineryList   = firstVec;
    itemIndex    = itemChosen;
    totalToVisit = totalWineries;
    wineriesToVisit = listOfWineries;
    totalMiles   = &totalToVisit;
    newWineryList = *theNewWineryList;

    int prevWinery = 0;
    double miles = 0;
    if (listOfWineries != 0)
    {
        // List each winery
        for(vector<int>::iterator it = listOfWineries->begin(); it< listOfWineries->end(); it++)
        {
            if (prevWinery > 0)
            {
                miles += wineryList->at(*it).getDistance(prevWinery);
            }
            QListWidgetItem *Item;
            Item = new QListWidgetItem();
            Item->setText(QString::fromStdString(wineryList->at(*it).getWineryName()));
            ui->listWidget->addItem(Item);
            prevWinery = *it;
        }
        // Set total miles
        ui->label->setStyleSheet("padding: 5px;");
        ui->label->setText(QString::number(miles)+QString(" miles"));
    }
    else
    {
        int count = 0;
        // List each winery
        for(vector<WineryClass>::iterator it = newWineryList.begin(); it< newWineryList.end(); it++)
        {

            qDebug() << "First distance to " << prevWinery << " "<< newWineryList.at(count).getDistance(prevWinery);

            miles += newWineryList.at(count).getDistance(prevWinery);

            QListWidgetItem *Item;
            Item = new QListWidgetItem();
            Item->setText(QString::fromStdString(newWineryList.at(count).getWineryName()));
            ui->listWidget->addItem(Item);
            prevWinery = count;
            count++;
        }
        // Set total miles
        ui->label->setStyleSheet("padding: 5px;");
        ui->label->setText(QString::number(miles)+QString(" miles"));
    }
>>>>>>> parent of 9b69076... changes
}

displaytrip::~displaytrip()
{
    delete ui;
}

void displaytrip::on_pushButton_clicked()
{
    MainWindow *main = new MainWindow;
    this->reject();
    main->show();
}
