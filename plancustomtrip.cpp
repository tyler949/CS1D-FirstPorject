#include "plancustomtrip.h"
#include "ui_plancustomtrip.h"
#include <QCheckBox>
#include <QStandardItemModel>
#include <QModelIndex>
#include <QListWidgetItem>
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
    //    QCheckBox *checkbox = new QCheckBox(QString::fromStdString(wineryList->at(i).getWineryName()),this);

        QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(wineryList->at(i).getWineryName()), ui->listWidget);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable); // set checkable flag
        item->setCheckState(Qt::Unchecked); // AND initialize check state
    }
}

planCustomTrip::~planCustomTrip()
{
    delete ui;
}

void planCustomTrip::on_pushButton_clicked()
{
    // Vector for list of wineries to visit
    vector<int> wineriesToVisit;

    // Reset errors
    ui->noWineriesSelected->setText("");
    ui->noWineriesSelected->setStyleSheet("");
    ui->noMilesToTravel->setText("");
    ui->noMilesToTravel->setStyleSheet("");

    // Get value of total miles to travel
    int totalMilesToTravel = ui->spinBox->value();

    for(int row = 0; row < ui->listWidget->count(); row++)
    {
        // Check if item is checked. If so, add to vector
        // of wineries to visit
        if (ui->listWidget->item(row)->checkState() == Qt::Checked)
            wineriesToVisit.push_back(row);

    }
    if (wineriesToVisit.empty() || totalMilesToTravel == 0)
    {
        if (wineriesToVisit.empty())
        {
            ui->noWineriesSelected->setText("Please select at least one winery to visit");
            ui->noWineriesSelected->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
        if (totalMilesToTravel == 0)
        {
            ui->noMilesToTravel->setText("Miles to travel should be at least one mile");
            ui->noMilesToTravel->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
    }
    else
    {
        tripDisplay = new DisplayTrip(mainMenu,wineryList,0,totalMilesToTravel,&wineriesToVisit);
        this->reject();
        tripDisplay->show();
    }
}
