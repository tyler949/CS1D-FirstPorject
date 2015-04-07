#ifndef DREAMVACATION_H
#define DREAMVACATION_H

#include <QDialog>

namespace Ui {
class dreamvacation;
}

class dreamvacation : public QDialog
{
    Q_OBJECT

public:
    explicit dreamvacation(QWidget *parent = 0);
    ~dreamvacation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dreamvacation *ui;
};

#endif // DREAMVACATION_H
