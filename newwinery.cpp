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


    tempWinery.setWineryName(ui->NameTextBox->text().toStdString());

    this->updateWindow();

    if(count== wineryList->size())
    {
        this->reject();
        adminMenue->show();
    }

}

void newwinery::updateWindow()
{

    ui->doubleSpinBox->clear();
    // This class will be run whenever the winery has changed

    // Update Winery Title
    ui->nameLabel->setText(QString("Distance to "+ QString::fromStdString(wineryList->at(count).getWineryName())));
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
