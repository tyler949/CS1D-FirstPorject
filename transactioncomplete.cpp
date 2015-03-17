#include "transactioncomplete.h"
#include "ui_transactioncomplete.h"
#include "mainwindow.h"

transactionComplete::transactionComplete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transactionComplete)
{
    ui->setupUi(this);
}

transactionComplete::~transactionComplete()
{
    delete ui;
}

void transactionComplete::on_pushButton_clicked()
{
    // back to main menu
    MainWindow *main = new MainWindow();
    this->reject();
    main->show();
}
