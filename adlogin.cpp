#include "admenu.h"
#include "adlogin.h"
#include "ui_adlogin.h"

adlogin::adlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adlogin)
{
    ui->setupUi(this);
    mainMenu = parent;
}

adlogin::~adlogin()
{
    delete ui;
}

void adlogin::on_LoginButton_clicked()
{
//    menu = new admenu(this);
//    this->close();
//    menu->show();
}
