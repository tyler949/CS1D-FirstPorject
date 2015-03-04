#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewwinerieswindow.h"
#include "plandaytrip.h"
#include "tourwineries.h"
#include "wineryclass.h"
#include <QMessageBox>
#include <QString>
#include <iostream>
#include <QDebug>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent,vector<WineryClass> *firstVec) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTextStream out(stdout);
    ui->setupUi(this);
    wineryList = firstVec;
    /*for (int i = 0; i < wineryList->size(); i++)
    {

        out << QString("Some text");
        out << QString("*********************");
        out << QString("test ");
        QString test = QString::fromStdString(wineryList->at(i).getWineryName());
        out <<  QString(test);
        out << endl;
    }*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quit_clicked()
{
    QMessageBox msgBox;
    msgBox.setStandardButtons(QMessageBox::Yes| QMessageBox::No);
    msgBox.setText("Are you sure you want to quit?");
    msgBox.setStyleSheet("QMessageBox{background:#333;}QLabel{color: #fff;};"
                         "QPushButton{background:#eee;}");
    msgBox.setWindowTitle("Quit");

    if (msgBox.exec() == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

void MainWindow::on_viewWineries_clicked()
{
    viewWineries = new viewWineriesWindow(this,wineryList);
    this->close();
    viewWineries->exec();
}

void MainWindow::on_planADayTrip_clicked()
{
    dayTrip = new planDayTrip(this,wineryList);
    this->close();
    dayTrip->exec();
}

void MainWindow::on_tourAndPurchaseWines_clicked()
{
    tourWines = new tourWineries(this);
    this->hide();
    tourWines->show();
}
