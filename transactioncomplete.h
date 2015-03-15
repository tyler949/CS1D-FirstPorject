#ifndef TRANSACTIONCOMPLETE_H
#define TRANSACTIONCOMPLETE_H

#include <QDialog>

namespace Ui {
class transactionComplete;
}

class transactionComplete : public QDialog
{
    Q_OBJECT

public:
    explicit transactionComplete(QWidget *parent = 0);
    ~transactionComplete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::transactionComplete *ui;
};

#endif // TRANSACTIONCOMPLETE_H
