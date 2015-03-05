#ifndef ADMENU_H
#define ADMENU_H

#include <QDialog>

namespace Ui {
class admenu;
}

class admenu : public QDialog
{
    Q_OBJECT

public:
    explicit admenu(QWidget *parent = 0);
    ~admenu();

private:
    Ui::admenu *ui;
};

#endif // ADMENU_H
