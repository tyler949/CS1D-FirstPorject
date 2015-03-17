#include "newwinery.h"
#include "ui_newwinery.h"


newwinery::newwinery(QWidget *parent, vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::newwinery)
{
    ui->setupUi(this);
    wineryList = firstVec;
    adminMenue = parent;
    count=0;
}

newwinery::~newwinery()
{
    delete ui;
}

void newwinery::on_AddWineryButton_clicked()
{
    //string str = wineryList->at(count+1).getWineryName();
    QString qstr = "hello";

    if(count < 5)
    {

        ui->nameLabel->setText(QString::fromStdString(wineryList->at(5).getWineryName()));
        count++;
    }
    else
    {
    this->reject();
    adminMenue->show();
    }


}

void newwinery::updateWindow()
{
    // This class will be run whenever the winery has changed

    // Update Winery Title
    ui->nameLabel->setText(QString("Winery %1: "+ QString::fromStdString(wineryList->at(count).getWineryName())).arg(count+1));

    // If it's at last winery, then the label will change "View total purchase" otherwise keep going next
    if (count == wineryList->size()-1)
    {
        ui->AddWineryButton->setText("Finish");
    }
    else
        ui->AddWineryButton->setText("Next Winery");
}
