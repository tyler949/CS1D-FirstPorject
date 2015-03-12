#ifndef SHOPFORWINE_H
#define SHOPFORWINE_H
#include <vector>
#include "wineryclass.h"
#include <QDialog>
#include "winepurchasetemplate.h"

namespace Ui {
class shopForWine;
}

class shopForWine : public QDialog
{
    Q_OBJECT

public:
    explicit shopForWine(QWidget *parent = 0,int currentWinery = 0,vector<WineryClass> *wineryVector = 0, vector<winePurchase> *purchases = 0);
    ~shopForWine();

private slots:
    void on_addWineToOrder_clicked();

private:
    Ui::shopForWine *ui;
    QWidget *mainMenu;
    int currentWinery;
    vector<WineryClass> *wineryList;
    vector<winePurchase> *totalWinePurchases;
};

#endif // SHOPFORWINE_H
