#ifndef DISPLAYTRIP_H
#define DISPLAYTRIP_H

#include <QDialog>

namespace Ui {
class DisplayTrip;
}

class DisplayTrip : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayTrip(QWidget *parent = 0);
    ~DisplayTrip();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DisplayTrip *ui;
    QWidget *mainMenu;
};

#endif // DISPLAYTRIP_H
