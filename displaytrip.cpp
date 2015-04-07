#include "displaytrip.h"
#include "ui_displaytrip.h"
#include "mainwindow.h"

displaytrip::displaytrip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displaytrip)
{
    ui->setupUi(this);
}

displaytrip::~displaytrip()
{
    delete ui;
}

void displaytrip::on_pushButton_clicked()
{
    MainWindow *main = new MainWindow;
    this->reject();
    main->show();
}
