#include "changeprice.h"
#include "ui_changeprice.h"


changeprice::changeprice(QWidget *parent,vector<WineryClass> *firstVec) :
    QDialog(parent),
    ui(new Ui::changeprice)
{
    ui->setupUi(this);
    wineryList = firstVec;
    adminMenue = parent;
    ui->WineryComboBox->addItem("Select Winery");

    //display wine names
    for(int i=0;i< wineryList->size();i++)
    {
        ui->WineryComboBox->addItem(QString::fromStdString(wineryList->at(i).getWineryName()));


    }




//    vector<wineType> *wineTypes;
//    wineTypes = wineryList->at(currentWinery).getWines();

//    // Each each wine to the table
//    for(int i=0; i < wineTypes->size(); i++)
//    {
//        ui->tableWidget->insertRow(i);
//        QSpinBox *spinBox = new QSpinBox(ui->tableWidget);
//        ui->tableWidget->setCellWidget(i,0,spinBox);
//        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(wineTypes->at(i).getName())));
//    }
}

changeprice::~changeprice()
{
    delete ui;
}

void changeprice::on_ConfirmChangeButton_clicked()
{
    this->reject();
    adminMenue->show();
}

void changeprice::on_WineryComboBox_activated(const QString &arg1)
{
    //ui->TypeOfWineComboBox->clear();

}

void changeprice::on_TypeOfWineComboBox_currentIndexChanged(const QString &arg1)
{

}

void changeprice::on_TypeOfWineComboBox_currentIndexChanged(int index)
{

}
void changeprice::on_WineryComboBox_currentIndexChanged(const QString &arg1)
{



}

void changeprice::on_WineryComboBox_currentIndexChanged(int index)
{
    for(int j = 0; j < wineryList->at(ui->TypeOfWineComboBox->currentIndex()).getWinesOffered(); j++)
    {
        ui->TypeOfWineComboBox->addItem(QString::fromStdString(wineryList->at(ui->WineryComboBox->currentIndex()).getWineName(j)));
    }

}
