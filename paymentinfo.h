#ifndef PAYMENTINFO_H
#define PAYMENTINFO_H

#include <QDialog>

namespace Ui {
class paymentinfo;
}

class paymentinfo : public QDialog
{
    Q_OBJECT

public:
    explicit paymentinfo(QWidget *parent = 0);
    ~paymentinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::paymentinfo *ui;
};

#endif // PAYMENTINFO_H
