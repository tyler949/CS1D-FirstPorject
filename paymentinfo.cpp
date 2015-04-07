#include "paymentinfo.h"
#include "ui_paymentinfo.h"
#include "transactioncomplete.h"
paymentinfo::paymentinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paymentinfo)
{
    ui->setupUi(this);

    // Input mask gives the type of input allowed
    ui->cardNum->setInputMask("0000000000000000");
    // Max length of the input
    ui->cardNum->setMaxLength(9999999999999999);
}

paymentinfo::~paymentinfo()
{
    delete ui;
}

void paymentinfo::on_pushButton_clicked()
{

    // Clear label errors
    ui->errorCardNum->setText("");
    ui->errorCardNum->setStyleSheet("");
    ui->errorFirstName->setText("");
    ui->errorFirstName->setStyleSheet("");
    ui->errorLastName->setText("");
    ui->errorLastName->setStyleSheet("");

    // Error check if firstname, lastname or cardnumber is empty
    if (ui->firstName->text() == "" || ui->lastName->text() == "" || ui->cardNum->text() == "")
    {
        // Then go through each error and output the label error if there is an error

        if (ui->firstName->text() == "")
        {
            ui->errorFirstName->setText("First name is required");
            ui->errorFirstName->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
        if (ui->lastName->text() == "")
        {
            ui->errorLastName->setText("Last name is required");
            ui->errorLastName->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
        if (ui->cardNum->text() == "")
        {
            ui->errorCardNum->setText("Credit Card number is required");
            ui->errorCardNum->setStyleSheet("background:#ccc;color:#ff0000;padding:5px;");
        }
    }
    else
    {
        // If all successful, thenit will process the card and direct to transaction complete page
        transactionComplete *trans = new transactionComplete;
        this->reject();
        trans->show();
    }

}
