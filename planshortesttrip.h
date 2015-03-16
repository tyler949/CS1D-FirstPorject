#ifndef PLANSHORTESTTRIP_H
#define PLANSHORTESTTRIP_H

#include <QDialog>
#include "displaytrip.h"
#include <vector>
#include "wineryclass.h"

namespace Ui {
class planShortestTrip;
}

class planShortestTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planShortestTrip(QWidget *parent = 0,vector<WineryClass> *firstVec = 0);
    ~planShortestTrip();

private slots:

    void on_pushButton_clicked();

    void on_back_clicked();

private:
    Ui::planShortestTrip *ui;
    QWidget *mainMenu;
    DisplayTrip *tripDisplay;
    vector<WineryClass> *wineryList;

};

#endif // PLANSHORTESTTRIP_H
