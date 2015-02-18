#include "shopforwine.h"
#include "ui_shopforwine.h"

shopForWine::shopForWine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shopForWine)
{
    ui->setupUi(this);
}

shopForWine::~shopForWine()
{
    delete ui;
}
