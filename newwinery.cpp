#include "newwinery.h"
#include "ui_newwinery.h"
#include <string.h>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QDebug>
#include "adlogin.h"
newwinery::newwinery(QWidget *parent, vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::newwinery)
{
    ui->setupUi(this);
    wineryList = firstVec;
    count=0;

    // Set table columns, header, and remove vertical header
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("Distance"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("Winery Name"));
    ui->tableWidget->verticalHeader()->setVisible(false);

    // Each each winery to the table
    for(int i=0; i < wineryList->size(); i++)
    {
        ui->tableWidget->insertRow(i);
        QDoubleSpinBox *spinBox = new QDoubleSpinBox(ui->tableWidget);
        ui->tableWidget->setCellWidget(i,0,spinBox);
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(wineryList->at(i).getWineryName())));
    }
}

newwinery::~newwinery()
{
    delete ui;
}

void newwinery::on_AddWineryButton_clicked()
{
    QDoubleSpinBox *sp;
    double distance;

    // Clear errors
    ui->NameRequire->setText("");
    ui->NameRequire->setStyleSheet("");
    ui->MilesToVillaRequired->setText("");
    ui->MilesToVillaRequired->setStyleSheet("");

    if ((ui->NameTextBox->text() == "") || (ui->doubleSpinBox->value() == 0))
    {
        if (ui->NameTextBox->text() == "")
        {
            ui->NameRequire->setText("Required");
            ui->NameRequire->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
        if (ui->doubleSpinBox->value() == 0)
        {
            ui->MilesToVillaRequired->setText("Required");
            ui->MilesToVillaRequired->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
    }
    else
    {
        tempWinery.setWineryName(ui->NameTextBox->text().toStdString());
        tempWinery.setMilesToVilla(ui->doubleSpinBox->value());
        for(int i = 0; i < wineryList->size()/*-1*/; i++)
        {
            sp = (QDoubleSpinBox*)ui->tableWidget->cellWidget(i,0);
            distance = sp->value();
            tempWinery.addDistance(distance);
        }

        tempWinery.addDistance(0.0);
        adminuser.adminAddWinery(*wineryList, tempWinery);
        this->reject();
        adminMenue = new admenu(0,wineryList);
        adminMenue->show();
    }

}

void newwinery::updateWindow()
{
}
