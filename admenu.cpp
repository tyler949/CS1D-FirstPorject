#include "admenu.h"
#include "ui_admenu.h"
#include "newwinery.h"
#include "addwine.h"
#include "changeprice.h"
#include "mainwindow.h"

admenu::admenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admenu)
{
    ui->setupUi(this);
    login = parent;
}

admenu::~admenu()
{
    delete ui;
}

void admenu::on_AddWineriesButton_clicked()
{

}

void admenu::on_AddWineButton_clicked()
{
    wines = new addwine(this);
    this->close();
    wines->show();
}

void admenu::on_ChangeWinePriceButton_clicked()
{
//    price = new changeprice(this);
//    this->close();
//    price->show();
}

void admenu::on_ReturnToMenuButton_clicked()
{

}
