#ifndef VIEWWINERIESWINDOW_H
#define VIEWWINERIESWINDOW_H

#include <QDialog>
#include <vector>
#include "wineryclass.h"
namespace Ui {
class viewWineriesWindow;
}

class viewWineriesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit viewWineriesWindow(QWidget *parent = 0,vector<WineryClass> *firstVec = 0);
    ~viewWineriesWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::viewWineriesWindow *ui;
    QWidget *mainMenu;
    vector<WineryClass> *wineryList;
};

#endif // VIEWWINERIESWINDOW_H
