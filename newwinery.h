#ifndef NEWWINERY_H
#define NEWWINERY_H

#include <QDialog>

namespace Ui {
class newwinery;
}

class newwinery : public QDialog
{
    Q_OBJECT

public:
    explicit newwinery(QWidget *parent = 0);
    ~newwinery();

private:
    Ui::newwinery *ui;
};

#endif // NEWWINERY_H
