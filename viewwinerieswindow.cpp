#include "viewwinerieswindow.h"
#include "ui_viewwinerieswindow.h"
#include <QLabel>
#include <QString>
#include <QTextStream>
#include <QLabel>
#include <QList>
#include <QFormLayout>
#include <QColumnView>
#include <QVector>
#include <QComboBox>

viewWineriesWindow::viewWineriesWindow(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::viewWineriesWindow)
{
    ui->setupUi(this);
    mainMenu   = parent;
    wineryList = firstVec;

    for(int i=0;i< wineryList->size();i++)
    {
        QListWidgetItem *Item,*Item2;
        Item = new QListWidgetItem();
        Item->setText(QString::fromStdString(wineryList->at(i).getWineryName()));

        Item2 = new QListWidgetItem();
        Item2->setText(QString::number(wineryList->at(i).getWinesOffered()));

        ui->listWidget->addItem(Item);
        ui->winesOffered->addItem(Item2);
    }
}

viewWineriesWindow::~viewWineriesWindow()
{
    delete ui;
}

void viewWineriesWindow::on_pushButton_clicked()
{
    this->reject();
    mainMenu->show();
}
