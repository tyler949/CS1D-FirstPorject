#include "changeprice.h"
#include "ui_changeprice.h"


changeprice::changeprice(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::changeprice)
{
    ui->setupUi(this);
    wineryList = firstVec;
}

changeprice::~changeprice()
{
    delete ui;
}

void changeprice::on_ConfirmChangeButton_clicked()
{
;
}
