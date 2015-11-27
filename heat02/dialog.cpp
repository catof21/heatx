#include "dialog.h"
#include "ui_dialog.h"
#include <vector>
#include <flow.h>

using namespace::std;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->STemp->setText("180");
    ui->TTemp->setText("80");
    ui->HCap->setText("20");
    ui->STemp_2->setText("130");
    ui->TTemp_2->setText("80");
    ui->HCap_2->setText("20");
    ui->STemp_3->setText("130");
    ui->TTemp_3->setText("80");
    ui->HCap_3->setText("20");
    ui->STemp_4->setText("130");
    ui->TTemp_4->setText("80");
    ui->HCap_4->setText("20");
    ui->deltaT->setText("10");

}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_ok_clicked()
{

}


