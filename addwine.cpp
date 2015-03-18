#include "addwine.h"
#include "ui_addwine.h"
#include "wine.h"
#include "Winerie.h"
#include "wineryclass.h"
#include <QDebug>
addwine::addwine(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::addwine)
{
    ui->setupUi(this);
    wineryList = firstVec;
    adminMenue = parent;

    ui->WineryDropDownBox->addItem("Select Winery");
    for(int i=0;i< wineryList->size();i++)
    {
        ui->WineryDropDownBox->addItem(QString::fromStdString(wineryList->at(i).getWineryName()));
    }
}

addwine::~addwine()
{
    delete ui;
}

void addwine::on_AddWineButton_clicked()
{

    int wineryNum;
    int winesOffered;
    tempWine.setName(ui->TypeOfWineTextBox->text().toStdString());
    tempWine.setYear(ui->spinBox->value());
    tempWine.setCost(ui->doubleSpinBox->value());

    // Get winery number
    wineryNum = ui->WineryDropDownBox->currentIndex();
    winesOffered = wineryList->at(wineryNum-1).getWinesOffered();
    qDebug() << "Winery Number: " << wineryNum;
    qDebug() << "Wines offered: " << winesOffered;
    wineryList->at(wineryNum-1).setWinesOffered(winesOffered+1);

    wineryList->at(ui->WineryDropDownBox->currentIndex()-1).addWine(tempWine);
    this->reject();
    adminMenue->show();
}
