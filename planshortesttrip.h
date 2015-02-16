#ifndef PLANSHORTESTTRIP_H
#define PLANSHORTESTTRIP_H

#include <QDialog>

namespace Ui {
class planShortestTrip;
}

class planShortestTrip : public QDialog
{
    Q_OBJECT

public:
    explicit planShortestTrip(QWidget *parent = 0);
    ~planShortestTrip();

private slots:

private:
    Ui::planShortestTrip *ui;
};

#endif // PLANSHORTESTTRIP_H
