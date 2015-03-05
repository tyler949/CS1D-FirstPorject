#ifndef CHANGEPRICE_H
#define CHANGEPRICE_H

#include <QDialog>

namespace Ui {
class changeprice;
}

class changeprice : public QDialog
{
    Q_OBJECT

public:
    explicit changeprice(QWidget *parent = 0);
    ~changeprice();

private:
    Ui::changeprice *ui;
};

#endif // CHANGEPRICE_H
