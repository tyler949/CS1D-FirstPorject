
#ifndef ADLOGIN_H
#define ADLOGIN_H

#include <QDialog>
#include "admenu.h"
#include <QVector>
#include <vector>
#include "wineryclass.h"
#include "user.h"
#include <QString>



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

    void on_mainmenuebutton_clicked();

private:
    Ui::adlogin *ui;
    QWidget *mainMenu;
    admenu *menu;
    vector<WineryClass> *wineryList;
    user admin;
    string username;
    string password;
    int attempts;





};

#endif // ADLOGIN_H
