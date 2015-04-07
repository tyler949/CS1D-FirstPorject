#ifndef TOTALWINEORDER_H
#define TOTALWINEORDER_H
#include <vector>
#include "wineryclass.h"
#include "winepurchasetemplate.h"
#include <QDialog>

namespace Ui {
class totalWineOrder;
}

class totalWineOrder : public QDialog
{
    Q_OBJECT

public:
    explicit totalWineOrder(QWidget *parent = 0,vector<WineryClass> *originalList = 0,vector<WineryClass> *listOfWineries = 0, vector<winePurchase> *purchases = 0);
    ~totalWineOrder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::totalWineOrder *ui;
    vector<WineryClass> *wineryList;
    vector<winePurchase> *totalWinePurchases;
    vector<WineryClass> *originalWineryList;
    double orderTotal;
};

#endif // TOTALWINEORDER_H
