#include "viewwinerieswindow.h"
#include "ui_viewwinerieswindow.h"

viewWineriesWindow::viewWineriesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewWineriesWindow)
{
    ui->setupUi(this);
    mainMenu = parent;
}

viewWineriesWindow::~viewWineriesWindow()
{
    delete ui;
}

void viewWineriesWindow::on_pushButton_clicked()
{
    this->close();
    mainMenu->show();
}
