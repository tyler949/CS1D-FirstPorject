#include "addwine.h"
#include "ui_addwine.h"
#include "admenu.h"

addwine::addwine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwine)
{
    ui->setupUi(this);
}

addwine::~addwine()
{
    delete ui;
}

void addwine::on_AddWineButton_clicked()
{
}
