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
    QApplication a(argc, argv);

    vector<WineryClass> firstVec;
    PropagateVector(firstVec);

    firstVec.at(3).getWines();
    MainWindow w(0,&firstVec);

    w.show();



    return a.exec();
}
