#include "changeprice.h"
#include "ui_changeprice.h"

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
