#include "viewwinerieswindow.h"
#include "ui_viewwinerieswindow.h"

viewWineriesWindow::viewWineriesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewWineriesWindow)
{
    ui->setupUi(this);
}

viewWineriesWindow::~viewWineriesWindow()
{
    delete ui;
}
