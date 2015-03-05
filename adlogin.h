#ifndef ADLOGIN_H
#define ADLOGIN_H

#include <QDialog>

namespace Ui {
class adlogin;
}

class adlogin : public QDialog
{
    Q_OBJECT

public:
    explicit adlogin(QWidget *parent = 0);
    ~adlogin();

private:
    Ui::adlogin *ui;
};

#endif // ADLOGIN_H
