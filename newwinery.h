#ifndef NEWWINERY_H
#define NEWWINERY_H

#include <QDialog>
#include "admenu.h"

namespace Ui {
class newwinery;
}

class newwinery : public QDialog
{
    Q_OBJECT

public:
    explicit newwinery(QWidget *parent = 0);
    ~newwinery();

private slots:
    void on_AddWineryButton_clicked();

private:
    Ui::newwinery *ui;

};

#endif // NEWWINERY_H
