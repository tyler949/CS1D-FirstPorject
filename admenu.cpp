#include "admenu.h"
#include "ui_admenu.h"
#include "newwinery.h"
#include "addwine.h"
#include "changeprice.h"
#include "mainwindow.h"

admenu::admenu(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::admenu)
{
    ui->setupUi(this);
    login = parent;
    wineryList = firstVec;
}

admenu::~admenu()
{
    delete ui;
}

void admenu::on_AddWineriesButton_clicked()
{
    winery = new newwinery(this,wineryList);
    this->close();
    winery->show();
}

void admenu::on_AddWineButton_clicked()
{
    wines = new addwine(this,wineryList);
    this->close();
    wines->show();
}

void admenu::on_ChangeWinePriceButton_clicked()
{
    price = new changeprice(this,wineryList);
    this->close();
    price->show();
}

void admenu::on_ReturnToMenuButton_clicked()
{
    MainWindow *main = new MainWindow(this, wineryList);
    this->reject();
    main->show();
}
