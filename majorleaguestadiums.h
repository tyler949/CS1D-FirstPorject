#ifndef MAJORLEAGUESTADIUMS_H
#define MAJORLEAGUESTADIUMS_H

#include <QDialog>

namespace Ui {
class majorleaguestadiums;
}

class majorleaguestadiums : public QDialog
{
    Q_OBJECT

public:
    explicit majorleaguestadiums(QWidget *parent = 0);
    ~majorleaguestadiums();

private slots:
    void on_pushButton_clicked();

private:
    Ui::majorleaguestadiums *ui;
};

#endif // MAJORLEAGUESTADIUMS_H
