#ifndef DISPLAYTRIP_H
#define DISPLAYTRIP_H

#include <QDialog>
#include <vector>
#include "wineryclass.h"

namespace Ui {
class DisplayTrip;
}

class DisplayTrip : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayTrip(QWidget *parent = 0,vector<WineryClass> *firstVec = 0,
                         int itemChosen = 0,
                         int totalAmount = 0,
                         vector<int> *listOfWineries = 0,
                         vector<WineryClass> *newWineryList = 0
                         );
    ~DisplayTrip();

private slots:
    void on_pushButton_clicked();

    void on_shopForWine_clicked();

private:
    Ui::DisplayTrip *ui;
    QWidget *mainMenu;
    vector<WineryClass> *wineryList;
    int itemIndex;
    int totalToVisit;
    int *totalMiles;
    vector<int> *wineriesToVisit;
    vector<WineryClass> *newWineryList;
};

#endif // DISPLAYTRIP_H
