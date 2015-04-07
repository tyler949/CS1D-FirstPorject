#ifndef PLANCUSTOMTRIP_H
#define PLANCUSTOMTRIP_H

#include <QDialog>
#include "displaytrip.h"
#include "wineryclass.h"
#include <vector>

namespace Ui {
class planCustomTrip;
}

class planCustomTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planCustomTrip(QWidget *parent = 0,vector<WineryClass> *firstVec = 0);
    ~planCustomTrip();

private slots:
    void on_pushButton_clicked();

    void on_back_clicked();

private:
    Ui::planCustomTrip *ui;
    QWidget *mainMenu;
    DisplayTrip *tripDisplay;
    vector<WineryClass> *wineryList;
};

#endif // PLANCUSTOMTRIP_H
