#ifndef TOURWINERIES_H
#define TOURWINERIES_H
#include <vector>
#include "wineryclass.h"
#include <QDialog>
#include "shopforwine.h"
#include "totalwineorder.h"

namespace Ui {
class tourWineries;
}

class tourWineries : public QDialog
{
    Q_OBJECT

public:
    explicit tourWineries(QWidget *parent = 0,vector<WineryClass> *originalList = 0,int current = 0,vector<WineryClass> *firstVec = 0, vector<winePurchase> *purchase = 0);
    ~tourWineries();

private slots:
    void on_pushButton_clicked();

    void updateWinery();

    void on_visitNextWinery_clicked();

    void on_shopForWine_clicked();

private:
    Ui::tourWineries *ui;
    QWidget *mainMenu;
    shopForWine *shopWine;
    vector<winePurchase> *winePurchases;
    vector<WineryClass> *wineryList;
    vector<WineryClass> wineriesToShop;
    vector<WineryClass> *originalWineryList;
    int currentWinery;
};

#endif // TOURWINERIES_H
