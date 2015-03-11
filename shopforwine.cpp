#include "shopforwine.h"
#include "ui_shopforwine.h"
#include <QListWidgetItem>
#include <QSpinBox>
#include <QGroupBox>

shopForWine::shopForWine(QWidget *parent,int currentWineryIndex,vector<WineryClass> *wineryVector) :
    QDialog(parent),
    ui(new Ui::shopForWine)
{
    ui->setupUi(this);
    mainMenu      = parent;
    wineryList    = wineryVector;
    currentWinery = currentWineryIndex;




    for(int i = 0; i < wineryList->size(); i++)
    {
        QSpinBox *integerSpinBox = new QSpinBox;
        integerSpinBox->setRange(0, 20);
        integerSpinBox->setSingleStep(1);
        integerSpinBox->setValue(0);
        integerSpinBox->setStyleSheet("height:70px");

        ui->verticalLayout->addWidget(integerSpinBox);
        QListWidgetItem* item = new QListWidgetItem(QString("Wines will go here"), ui->listWidget);
    }

    //->addWidget(spinBox);
      //  layout->addWidget(slider);
       // window->setLayout(layout);
}

shopForWine::~shopForWine()
{
    delete ui;
}
