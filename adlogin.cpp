#include "adlogin.h"
#include "ui_adlogin.h"
#include <vector>
#include "wineryclass.h"

adlogin::adlogin(QWidget *parent, vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::adlogin)
{
    ui->setupUi(this);
    wineryList = firstVec;
}

adlogin::~adlogin()
{
    delete ui;
}

void adlogin::on_loginButton_clicked()
{
    menu = new admenu(this,wineryList);
    this->close();
    menu->show();
}
