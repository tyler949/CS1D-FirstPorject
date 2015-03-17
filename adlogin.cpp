#include "adlogin.h"
#include "ui_adlogin.h"
#include <vector>
#include "wineryclass.h"
#include "mainwindow.h"

adlogin::adlogin(QWidget *parent, vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::adlogin)
{
    ui->setupUi(this);
    wineryList = firstVec;
    mainMenu = parent;

}

adlogin::~adlogin()
{
    delete ui;
}

void adlogin::on_loginButton_clicked()
{
    username = ui->usernameBox->text().toStdString();
    password = ui->passwordBox->text().toStdString();

    if(admin.checkValid(username,password))
    {
        menu = new admenu(this,wineryList);
        this->close();
        menu->show();
    }

}

void adlogin::on_mainmenuebutton_clicked()
{

    this->reject();
    mainMenu->show();
}