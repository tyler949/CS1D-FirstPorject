#ifndef CHANGEPRICE_H
#define CHANGEPRICE_H

#include <QDialog>
//#include "admenu.h"

namespace Ui {
class changeprice;
}

class changeprice : public QDialog
{
    Q_OBJECT

public:
    explicit changeprice(QWidget *parent = 0);
    ~changeprice();

private slots:
    void on_ConfirmChangeButton_clicked();

private:
    Ui::changeprice *ui;
;
};

#endif // CHANGEPRICE_H
