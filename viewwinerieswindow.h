#ifndef VIEWWINERIESWINDOW_H
#define VIEWWINERIESWINDOW_H

#include <QDialog>

namespace Ui {
class viewWineriesWindow;
}

class viewWineriesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit viewWineriesWindow(QWidget *parent = 0);
    ~viewWineriesWindow();

private:
    Ui::viewWineriesWindow *ui;
};

#endif // VIEWWINERIESWINDOW_H
