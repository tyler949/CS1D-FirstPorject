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

private slots:
    void on_pushButton_clicked();

private:
    Ui::viewWineriesWindow *ui;
    QWidget *mainMenu;
};

#endif // VIEWWINERIESWINDOW_H
