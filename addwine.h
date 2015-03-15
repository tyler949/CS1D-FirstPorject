#ifndef ADDWINE_H
#define ADDWINE_H

#include <QDialog>
#include <QVector>
#include <vector>
#include "wineryclass.h"



namespace Ui {
class addwine;
}

class addwine : public QDialog
{
    Q_OBJECT

public:
    explicit addwine(QWidget *parent = 0,vector<WineryClass> *firstVec = 0);
    ~addwine();

private slots:
    void on_AddWineButton_clicked();

private:
    Ui::addwine *ui;
     vector<WineryClass> *wineryList;
     QWidget *adminMenue;
};

#endif // ADDWINE_H
