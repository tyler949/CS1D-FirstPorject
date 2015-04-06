#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <QTextStream>
#include <vector>
#include <QDebug>

int main(int argc, char *argv[])
{
    // Start application
    QApplication a(argc, argv);

    // Open the main window and let's get started
    MainWindow w;
    w.show();


    return a.exec();
}
