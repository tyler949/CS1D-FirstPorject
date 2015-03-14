
#ifndef ADLOGIN_H
#define ADLOGIN_H

#include <QDialog>
#include "admenu.h"
#include <QVector>
#include <vector>
#include "wineryclass.h"



namespace Ui {
class adlogin;
}

class adlogin : public QDialog
{
    Q_OBJECT

public:
    explicit adlogin(QWidget *parent = 0, vector<WineryClass> *firstVec = 0);
    ~adlogin();

private slots:

    void on_loginButton_clicked();

private:
    Ui::adlogin *ui;
    QWidget *mainMenu;
    admenu *menu;
    vector<WineryClass> *wineryList;



};

#endif // ADLOGIN_H
