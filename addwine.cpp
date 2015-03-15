#include "addwine.h"
#include "ui_addwine.h"
#include "wine.h"
#include "Winerie.h"
#include "wineryclass.h"

addwine::addwine(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::addwine)
{
    ui->setupUi(this);
    wineryList = firstVec;

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
}
