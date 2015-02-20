#include "mainwindow.h"
#include <QApplication>
#include "wineryclass.h"
#include "propagatevector.cpp"
#include "winetype.h"

#include <vector>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    vector<WineryClass*> firstVec(30);
    PropagateVector(firstVec);

    vector<WineryClass*> *passVector;

    passVector = &firstVec;

    MainWindow w(0,passVector);

    w.show();



    return a.exec();
}
