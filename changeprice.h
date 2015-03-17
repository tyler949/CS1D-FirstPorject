#ifndef CHANGEPRICE_H
#define CHANGEPRICE_H

#include <QDialog>
//#include "admenu.h"
#include <QVector>
#include <vector>
#include "wineryclass.h"

namespace Ui {
class changeprice;
}

class changeprice : public QDialog
{
    Q_OBJECT

public:
    explicit changeprice(QWidget *parent = 0,vector<WineryClass> *firstVec = 0);
    ~changeprice();

private slots:
    void on_ConfirmChangeButton_clicked();

    void on_WineryComboBox_activated(const QString &arg1);

    void on_TypeOfWineComboBox_currentIndexChanged(const QString &arg1);

    void on_TypeOfWineComboBox_currentIndexChanged(int index);

    void on_WineryComboBox_currentIndexChanged(const QString &arg1);

    void on_WineryComboBox_currentIndexChanged(int index);

private:
    Ui::changeprice *ui;
    vector<WineryClass> *wineryList;
    QWidget *adminMenue;
;
};

#endif // CHANGEPRICE_H
