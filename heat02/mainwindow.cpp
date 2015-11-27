#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "flow.h"
#include "vector"
#include "QString"
#include "QDebug"
#include "iostream"
#include "algorithm"

using namespace::std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->STemp->setText("180");
    ui->TTemp->setText("80");
    ui->HCap->setText("20");
    ui->STemp_2->setText("130");
    ui->TTemp_2->setText("40");
    ui->HCap_2->setText("40");
    ui->STemp_3->setText("60");
    ui->TTemp_3->setText("100");
    ui->HCap_3->setText("80");
    ui->STemp_4->setText("30");
    ui->TTemp_4->setText("120");
    ui->HCap_4->setText("36");
    ui->deltaT->setText("10");

    intervalbal = new QGraphicsScene(this);
    ui->graphicsView->setScene(intervalbal);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_ok_clicked()
{
    Flow *flow = new Flow;
    std::vector<Flow> flows;
//    flows.resize(4);
    int deltaT;
    deltaT=ui->deltaT->text().toInt();


//    for (int j=0;j<4;j++) {
//        flow->setID(1);
        flow->setSTemp(ui->STemp->text().toInt());
        flow->setTTemp(ui->TTemp->text().toInt());
        flow->setHCap(ui->HCap->text().toInt());
        flow->setIsHeat(true);
        flow->setAST(deltaT);
        flow->setATT(deltaT);
        flows.push_back(*flow);

//    }
        flow->setSTemp(ui->STemp_2->text().toInt());
        flow->setTTemp(ui->TTemp_2->text().toInt());
        flow->setHCap(ui->HCap_2->text().toInt());
        flow->setIsHeat(true);
        flow->setAST(deltaT);
        flow->setATT(deltaT);
        flows.push_back(*flow);
        flow->setSTemp(ui->STemp_3->text().toInt());
        flow->setTTemp(ui->TTemp_3->text().toInt());
        flow->setHCap(ui->HCap_3->text().toInt());
        flow->setIsHeat(false);
        flow->setAST(deltaT);
        flow->setATT(deltaT);
        flows.push_back(*flow);
        flow->setSTemp(ui->STemp_4->text().toInt());
        flow->setTTemp(ui->TTemp_4->text().toInt());
        flow->setHCap(ui->HCap_4->text().toInt());
        flow->setIsHeat(false);
        flow->setAST(deltaT);
        flow->setATT(deltaT);
        flows.push_back(*flow);
        //heat steps
        vector<int> heatsteps;
//        heatsteps.resize(8);
        vector<int> heatinterval;
    for (vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
//        ui->plainTextEdit->setPlainText(QString::number(j->getAST()));
//            heatsteps[i]=j->getAST();
            heatsteps.push_back(j->getAST());
//            qDebug("AST %d ->%d",j->getAST(),i);
//            heatsteps[i+1]=j->getATT();
            heatsteps.push_back(j->getATT());
//            qDebug("ATT %d ->%d",j->getATT(),i+1);

        }
    sort(heatsteps.begin(),heatsteps.end());
    int min=-1;
    for(int i=0;i<heatsteps.size();i++) {
        if (heatsteps[i]!=min){
            heatinterval.push_back(heatsteps[i]);
//            qDebug("bekerül: %d min %d", heatsteps[i], min);
            min=heatsteps[i];
        }
    }
    for (int i=0;i<heatinterval.size();i++) {
        qDebug("last heatinterval %d",heatinterval[i]);
    }

    intervalbal->clear();

    QBrush redbrush (Qt::red);
    QBrush bluebrush (Qt::blue);
    QBrush blackbrush (Qt::black);
    QBrush whitebrush (Qt::white);
    QBrush yellowbrush (Qt::yellow);
    QPen outline (Qt::black);
    QPen outline2 (Qt::black);
    QPen redpen (Qt::red);
    QPen bluepen (Qt::blue);
    outline.setWidth(2);
    outline2.setWidth(0.5);
    redpen.setWidth(2);
    bluepen.setWidth(2);

    //rectangle = intervalbal->addRect(-900,heatinterval[0],-20,20,20,outline,redbrush);
    rectangle = intervalbal->addRect(-900,heatinterval[0],-20,20,outline,redbrush);

    /*line = scene->addLine(-890,0-hot1.adjustedsupplytemperature,-890,0-hot1.adjustedtargettemperature,redpen);
    rectangle = scene->addRect(-850,0-hot2.adjustedsupplytemperature-20,20,20,outline,redbrush);
    line = scene->addLine(-840,0-hot2.adjustedsupplytemperature,-840,0-hot2.adjustedtargettemperature,redpen);
    rectangle = scene->addRect(-800,0-cold3.adjustedsupplytemperature,20,20,outline,bluebrush);
    line = scene->addLine(-790,0-cold3.adjustedsupplytemperature,-790,0-cold3.adjustedtargettemperature,bluepen);
    rectangle = scene->addRect(-750,0-cold4.adjustedsupplytemperature,20,20,outline,bluebrush);
    line = scene->addLine(-740,0-cold4.adjustedsupplytemperature,-740,0-cold4.adjustedtargettemperature,bluepen);
    text = scene->addText("1");
    text->setX(-898);
    text->setY(0-hot1.adjustedsupplytemperature-20);
    text = scene->addText("2");
    text->setX(-848);
    text->setY(0-hot2.adjustedsupplytemperature-20);
    text = scene->addText("3");
    text->setX(-798);
    text->setY(0-cold3.adjustedsupplytemperature);
    text = scene->addText("4");
    text->setX(-748);
    text->setY(0-cold4.adjustedsupplytemperature);
    */

}
