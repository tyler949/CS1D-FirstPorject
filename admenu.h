#ifndef ADMENU_H
#define ADMENU_H

#include <QDialog>
#include "addwine.h"
#include "newwinery.h"
#include "changeprice.h"
//#include "mainwindow.h"


namespace Ui {
class admenu;
}

class admenu : public QDialog
{
    Q_OBJECT

public:
    explicit admenu(QWidget *parent = 0);
    ~admenu();

private slots:
    void on_AddWineriesButton_clicked();

    void on_AddWineButton_clicked();

    void on_ChangeWinePriceButton_clicked();

    void on_ReturnToMenuButton_clicked();

private:
    Ui::admenu *ui;
    addwine *wines;
    QWidget *login;
    newwinery *winery;
    changeprice *price;
    //MainWindow mainWin;



//    changeprice *price;

};

#endif // ADMENU_H
