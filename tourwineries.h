#ifndef TOURWINERIES_H
#define TOURWINERIES_H

#include <QDialog>

namespace Ui {
class tourWineries;
}

class tourWineries : public QDialog
{
    Q_OBJECT

public:
    explicit tourWineries(QWidget *parent = 0);
    ~tourWineries();

private slots:
    void on_pushButton_clicked();

    void on_planShortestTrip_clicked();

private:
    Ui::tourWineries *ui;
    QWidget *mainMenu;
};

#endif // TOURWINERIES_H
