#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "wineryclass.h"
#include "viewwinerieswindow.h"
#include "plandaytrip.h"
#include "tourwineries.h"
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0,vector<WineryClass*> *firstVec = 0);
    ~MainWindow();

private slots:
    void on_quit_clicked();

    void on_viewWineries_clicked();

    void on_planADayTrip_clicked();

    void on_tourAndPurchaseWines_clicked();

private:
    Ui::MainWindow *ui;
    viewWineriesWindow *viewWineries;
    planDayTrip *dayTrip;
    tourWineries *tourWines;
    vector<WineryClass*> *wineryList;
};

#endif // MAINWINDOW_H
