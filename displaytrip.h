#ifndef DISPLAYTRIP_H
#define DISPLAYTRIP_H

#include <QDialog>

namespace Ui {
class displaytrip;
}

class displaytrip : public QDialog
{
    Q_OBJECT

public:
    explicit displaytrip(QWidget *parent = 0);
    ~displaytrip();

private slots:
    void on_pushButton_clicked();

private:
    Ui::displaytrip *ui;
};

#endif // DISPLAYTRIP_H
