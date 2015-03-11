#ifndef PURCHASEWINES_H
#define PURCHASEWINES_H

#include <QDialog>

namespace Ui {
class purchaseWines;
}

class purchaseWines : public QDialog
{
    Q_OBJECT

public:
    explicit purchaseWines(QWidget *parent = 0);
    ~purchaseWines();

private:
    Ui::purchaseWines *ui;
};

#endif // PURCHASEWINES_H
