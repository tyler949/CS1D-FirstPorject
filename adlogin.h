
#ifndef ADLOGIN_H
#define ADLOGIN_H

#include <QDialog>
#include "admenu.h"



namespace Ui {
class adlogin;
}

class adlogin : public QDialog
{
    Q_OBJECT

public:
    explicit adlogin(QWidget *parent = 0);
    ~adlogin();

private slots:

private:
    Ui::adlogin *ui;
    QWidget *mainMenu;
    //admenu *menu;



};

#endif // ADLOGIN_H
