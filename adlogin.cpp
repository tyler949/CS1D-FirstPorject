#include "adlogin.h"
#include "ui_adlogin.h"

adlogin::adlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adlogin)
{
    ui->setupUi(this);
}

adlogin::~adlogin()
{
    delete ui;
}