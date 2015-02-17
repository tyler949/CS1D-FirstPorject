#ifndef PLANSHORTESTTRIP_H
#define PLANSHORTESTTRIP_H

#include <QDialog>
#include "displaytrip.h"

namespace Ui {
class planShortestTrip;
}

class planShortestTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planShortestTrip(QWidget *parent = 0);
    ~planShortestTrip();

private slots:

    void on_pushButton_clicked();

private:
    Ui::planShortestTrip *ui;
    QWidget *mainMenu;
    DisplayTrip *tripDisplay;

};

#endif // PLANSHORTESTTRIP_H
