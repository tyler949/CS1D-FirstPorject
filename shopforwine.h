#ifndef SHOPFORWINE_H
#define SHOPFORWINE_H

#include <QDialog>

namespace Ui {
class shopForWine;
}

class shopForWine : public QDialog
{
    Q_OBJECT

public:
    explicit shopForWine(QWidget *parent = 0);
    ~shopForWine();

private:
    Ui::shopForWine *ui;
};

#endif // SHOPFORWINE_H
