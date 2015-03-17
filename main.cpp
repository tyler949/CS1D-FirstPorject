#include "mainwindow.h"
#include <QApplication>
#include "wineryclass.h"
#include "propagatevector.cpp"
#include "winetype.h"
#include <iostream>
#include <QTextStream>
#include <vector>
#include <QDebug>

int main(int argc, char *argv[])
{
    // Start application
    QApplication a(argc, argv);

    // Initialize & Propogate the vector
    vector<WineryClass> firstVec;
    PropagateVector(firstVec);

    // Open the main window and let's get started
    MainWindow w(0,&firstVec);
    w.show();


    return a.exec();
}
