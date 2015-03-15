#include "changeprice.h"
#include "ui_changeprice.h"


changeprice::changeprice(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::changeprice)
{
    ui->setupUi(this);
    wineryList = firstVec;
    ui->WineryComboBox->addItem("Select Winery");
    for(int i=0;i< wineryList->size();i++)
    {
        ui->WineryComboBox->addItem(QString::fromStdString(wineryList->at(i).getWineryName()));
    }
}

changeprice::~changeprice()
{
    delete ui;
}

void changeprice::on_ConfirmChangeButton_clicked()
{
;
}
