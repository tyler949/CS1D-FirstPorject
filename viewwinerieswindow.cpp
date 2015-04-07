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
#include <QStandardItemModel>

viewWineriesWindow::viewWineriesWindow(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::viewWineriesWindow)
{
    ui->setupUi(this);
    mainMenu   = parent;
    wineryList = firstVec;

    QStandardItemModel *model = new QStandardItemModel(0,1,this);
    model->setHorizontalHeaderItem(0,new QStandardItem(QString("Winery Name")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString("Distance From Canyon Villa")));

    for(int i=0;i< wineryList->size()-1;i++)
    {
        QStandardItem *firstRow  = new QStandardItem(QString::fromStdString(wineryList->at(i).getWineryName()));
        QStandardItem *secondRow = new QStandardItem(QString::number(wineryList->at(i).getMilesToVilla()));
        model->setItem(i,0,firstRow);
        model->setItem(i,1,secondRow);
    }
    ui->tableView->setModel(model);
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
