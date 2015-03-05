#ifndef ADDWINE_H
#define ADDWINE_H

#include <QDialog>

namespace Ui {
class addwine;
}

class addwine : public QDialog
{
    Q_OBJECT

public:
    explicit addwine(QWidget *parent = 0);
    ~addwine();

private:
    Ui::addwine *ui;
};

#endif // ADDWINE_H
