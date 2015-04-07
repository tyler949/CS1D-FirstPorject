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
    attempts = 0;

}

adlogin::~adlogin()
{
    delete ui;
}

void adlogin::on_loginButton_clicked()
{
    // Clear errors
    ui->wrongUP->setText("");
    ui->wrongUP->setStyleSheet("");
    username = ui->usernameBox->text().toStdString();
    password = ui->passwordBox->text().toStdString();

    if(admin.checkValid(username,password))
    {
        menu = new admenu(this,wineryList);
        this->close();
        menu->show();
    }
    else
    {
        attempts++;
        ui->wrongUP->setText("Wrong username / password. Attempts: " + QString::number(attempts));
        ui->wrongUP->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
    }

}

void adlogin::on_mainmenuebutton_clicked()
{

    this->reject();
    mainMenu->show();
}
