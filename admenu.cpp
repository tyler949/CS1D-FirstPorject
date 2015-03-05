#include "admenu.h"
#include "ui_admenu.h"

admenu::admenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admenu)
{
    ui->setupUi(this);
}

admenu::~admenu()
{
    delete ui;
}
