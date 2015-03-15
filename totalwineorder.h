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
    explicit totalWineOrder(QWidget *parent = 0,vector<WineryClass> *listOfWineries = 0, vector<winePurchase> *purchases = 0);
    ~totalWineOrder();

private:
    Ui::totalWineOrder *ui;
    vector<WineryClass> *wineryList;
    vector<winePurchase> *totalWinePurchases;
};

#endif // TOTALWINEORDER_H