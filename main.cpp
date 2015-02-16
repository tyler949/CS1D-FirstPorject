#include "mainwindow.h"
#include <QApplication>
#include "wineryclass.h"
#include "propagatevector.cpp"
#include <vector>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    vector<WineryClass*> firstVec(30);

    PropagateVector(firstVec);

    return a.exec();
}
