#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <iostream>
#include <QDebug>
#include <QTextStream>
#include <fstream>
#include <iomanip>
#include "majorleaguestadiums.h"
#include "dreamvacation.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
void WriteToFile(vector<WineryClass>& wineryVector)
{
    // On exit, write to file
    ofstream outFile;
    outFile.open("WineryTextFile.txt"); // need to put full extension for QT
    outFile << fixed << setprecision(1);

    // For each and every winery, get the winery name, number, and all the wines
    // And then set the distance of each winery to the other. Same format that is
    // on winerylist.txt
    for (int i = 0; i < wineryVector.size() - 1; i++)
    {
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
        outFile << wineryVector[i].getWinesOffered() << " wines offered\n";
        // Get wines offered from the wines vector of the winery list vector
        for (int j = 0; j < wineryVector[i].getWinesOffered(); j++)
        {
            outFile << wineryVector[i].getWineName(j) << endl;
            outFile << wineryVector[i].getWineYear(j) << endl;
            outFile << setprecision(2);
            outFile << wineryVector[i].getWineCost(j) << endl;
        }
        outFile << endl;
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
>>>>>>> parent of 9b69076... changes
=======
>>>>>>> e5ffc14d9e7476d7d5eb77b87218a479b9261d78

void MainWindow::on_pushButton_clicked()
{
    majorleaguestadiums *stadiums = new majorleaguestadiums;
    this->close();
    stadiums->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    dreamvacation *dream = new dreamvacation;
    this->close();
    dream->show();
}
<<<<<<< HEAD
>>>>>>> 50e0b4f... Revert "changes"
=======
>>>>>>> e5ffc14d9e7476d7d5eb77b87218a479b9261d78
