#include "purchasewines.h"
#include "ui_purchasewines.h"

purchaseWines::purchaseWines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::purchaseWines)
{
    ui->setupUi(this);
}

purchaseWines::~purchaseWines()
{
    delete ui;
}
