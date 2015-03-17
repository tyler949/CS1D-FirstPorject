#include "newwinery.h"
#include "ui_newwinery.h"
#include <string.h>


newwinery::newwinery(QWidget *parent, vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::newwinery)
{
    ui->setupUi(this);
    wineryList = firstVec;
    adminMenue = parent;
    count=0;
    ui->doubleSpinBox->close();
}

newwinery::~newwinery()
{
    delete ui;
}

void newwinery::on_AddWineryButton_clicked()
{

    if(count== 0)
    {
        tempWinery.setWineryName(ui->NameTextBox->text().toStdString());
    }
    else if(count == 1)
    {
        tempWinery.setMilesToVilla(ui->doubleSpinBox->value());
    }
    else
    {
        tempWinery.addDistance(ui->doubleSpinBox->value());
    }


    this->updateWindow();

    if(count== wineryList->size()+ 1)
    {
        tempWinery.addDistance(0.0);
        adminuser.adminAddWinery(*wineryList, tempWinery);
        this->reject();
        adminMenue->show();
    }

}

void newwinery::updateWindow()
{

    ui->doubleSpinBox->clear();
    // This class will be run whenever the winery has changed

    // Update Winery Title
    if(count == 0)
    {
        ui->nameLabel->setText(QString("Distance to Villa"));

    }
    else
    {
        ui->nameLabel->setText(QString("Distance to "+ QString::fromStdString(wineryList->at(count-1).getWineryName())));
    }

    count++;

    ui->NameTextBox->close();
    ui->doubleSpinBox->show();


    // If it's at last winery, then the label will change "View total purchase" otherwise keep going next
//    if (count == wineryList->size()-1)
//    {
//        ui->AddWineryButton->setText("Finish");
//    }
//    else
//        ui->AddWineryButton->setText("Next Winery");
}
