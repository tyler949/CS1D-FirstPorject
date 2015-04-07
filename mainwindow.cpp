#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <iostream>
#include <QDebug>
#include <QTextStream>
#include <fstream>
#include <iomanip>
#include "majorleaguestadiums.h"
#include "dreamvacation.h"
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

void MainWindow::on_pushButton_clicked()
{
    majorleaguestadiums *stadiums = new majorleaguestadiums;
    this->close();
    stadiums->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    dreamvacation *dream = new dreamvacation;
    this->close();
    dream->show();
}
