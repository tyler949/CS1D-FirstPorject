#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewwinerieswindow.h"
#include "plandaytrip.h"
#include <QMessageBox>
#include <QString>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    viewWineries = new viewWineriesWindow(this);
    this->close();
    viewWineries->exec();
}

void MainWindow::on_planADayTrip_clicked()
{
    dayTrip = new planDayTrip(this);
    this->close();
    dayTrip->exec();
}