#include "changeprice.h"
#include "ui_changeprice.h"
#include "admenu.h"

changeprice::changeprice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeprice)
{
    ui->setupUi(this);
}

changeprice::~changeprice()
{
    delete ui;
}

void changeprice::on_ConfirmChangeButton_clicked()
{
;
}