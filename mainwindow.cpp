#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewwinerieswindow.h"
#include "plandaytrip.h"
#include "tourwineries.h"
#include "wineryclass.h"
#include <QMessageBox>
#include <QString>
#include <iostream>
#include <QDebug>
#include <QTextStream>
#include <fstream>
#include <iomanip>

MainWindow::MainWindow(QWidget *parent,vector<WineryClass> *firstVec) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Get winery list from main window
    wineryList = firstVec;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void WriteToFile(vector<WineryClass>& wineryVector)
{
    // On exit, write to file
    ofstream outFile;
    outFile.open("C:/Users/gdfgdf/Documents/GitHub/CS1D-FirstPorject/winerytextfile.txt"); // need to put full extension for QT
    outFile << fixed << setprecision(1);

    // For each and every winery, get the winery name, number, and all the wines
    // And then set the distance of each winery to the other. Same format that is
    // on winerylist.txt
    for (int i = 0; i < wineryVector.size(); i++)
    {
        if (i > 0)
            outFile<< endl;
        outFile << "name of winery: " << wineryVector[i].getWineryName() << endl;
        outFile << "winery number " << wineryVector[i].getWineryNumber() << endl;
        outFile << "distance to other wineries - " << wineryVector[i].getNumberOfWinerys() << endl;
        for (int j = 0; j < wineryVector[i].getNumberOfWinerys(); j++)
        {
            outFile << j + 1 << " " << wineryVector[i].getDistance(j) << endl;
        }
        outFile << fixed << setprecision(2);
        outFile << wineryVector[i].getMilesToVilla() << " miles to Canyon Villa\n";
        outFile << fixed << setprecision(0);
        outFile << wineryVector[i].getWinesOffered() << " wines offered";
        // Get wines offered from the wines vector of the winery list vector
        if (wineryVector[i].getWinesOffered() > 0)
        {
            outFile << endl;
            for (int j = 0; j < wineryVector[i].getWinesOffered(); j++)
            {
                outFile << wineryVector[i].getWineName(j) << endl;
                outFile << wineryVector[i].getWineYear(j) << endl;
                outFile << setprecision(2);
                outFile << wineryVector[i].getWineCost(j);
                if ((i < wineryVector.size()-1) || (j!=wineryVector[i].getWinesOffered()-1))
                    outFile << endl;
            }
        }

    }

    // Done with file
    outFile.close();
}
void MainWindow::on_quit_clicked()
{
    // If user wants clicks on "Quit" it will give a confirmation message
    QMessageBox msgBox;
    // Options given are "Yes" to quit and "no" to stay.
    msgBox.setStandardButtons(QMessageBox::Yes| QMessageBox::No);
    msgBox.setText("Are you sure you want to quit?");
    // Stylize the confirmation box
    msgBox.setStyleSheet("QMessageBox{background:#333;}QLabel{color: #fff;};"
                         "QPushButton{background:#eee;}");
    msgBox.setWindowTitle("Quit");

    // If yes, it will write to file then quit
    if (msgBox.exec() == QMessageBox::Yes)
    {
        WriteToFile(*wineryList);
        QApplication::quit();
    }
}

void MainWindow::on_viewWineries_clicked()
{
    // View wineries once clicked and close this screen
    viewWineries = new viewWineriesWindow(this,wineryList);
    this->close();
    viewWineries->exec();
}

void MainWindow::on_planADayTrip_clicked()
{
    // View plan day trip screen once clicked and close this screen
    dayTrip = new planDayTrip(this,wineryList);
    this->close();
    dayTrip->exec();
}

void MainWindow::on_tourAndPurchaseWines_clicked()
{
    // Create instant of winery purchases
    winePurchases = new vector<winePurchase>;
    // Touring wineries will go through each winery so we will be with 0
    int currentWinery = 0;
    tourWines = new tourWineries(this,wineryList,currentWinery,wineryList,winePurchases);
    this->hide();
    tourWines->show();
}

void MainWindow::on_AdminLogin_clicked()
{
    // View  login once clicked and close this screen
    login = new adlogin(this, wineryList);
    this->close();
    login->show();
}
