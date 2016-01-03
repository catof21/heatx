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
    //for testing only
    ui->deltaT->setText("10");

    newflow.setSTemp(180);
    newflow.setTTemp(80);
    newflow.setHCap(20);
    newflow.setFlowName("H1");
    newflow.setIsHeat(true);
    newflow.setAST(ui->deltaT->text().toDouble());
    newflow.setATT(ui->deltaT->text().toDouble());
    flows.push_back(newflow);

    newflow.setSTemp(130);
    newflow.setTTemp(40);
    newflow.setHCap(40);
    newflow.setFlowName("H2");
    newflow.setIsHeat(true);
    newflow.setAST(ui->deltaT->text().toDouble());
    newflow.setATT(ui->deltaT->text().toDouble());
    flows.push_back(newflow);

    newflow.setSTemp(60);
    newflow.setTTemp(100);
    newflow.setHCap(80);
    newflow.setFlowName("C1");
    newflow.setIsHeat(false);
    newflow.setAST(ui->deltaT->text().toDouble());
    newflow.setATT(ui->deltaT->text().toDouble());
    flows.push_back(newflow);

    newflow.setSTemp(30);
    newflow.setTTemp(120);
    newflow.setHCap(36);
    newflow.setFlowName("C2");
    newflow.setIsHeat(false);
    newflow.setAST(ui->deltaT->text().toDouble());
    newflow.setATT(ui->deltaT->text().toDouble());
    flows.push_back(newflow);
    //testing data end



    intervalbal = new QGraphicsScene(this);
    ui->graphicsView->setScene(intervalbal);

}

MainWindow::~MainWindow()
{
    delete ui;

    delete intervalbal;
}

void MainWindow::on_btn_ok_clicked()
{
    //Flow *flow = new Flow;
    //std::vector<Flow> flows;

        //heat steps
        vector<double> heatsteps;
        vector<double> heatinterval;
    for (std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
//        ui->plainTextEdit->setPlainText(QString::number(j->getAST()));
            heatsteps.push_back(j->getAST());
//            qDebug("AST %d ->%d",j->getAST(),i);
            heatsteps.push_back(j->getATT());
//            qDebug("ATT %d ->%d",j->getATT(),i+1);

        }
    sort(heatsteps.begin(),heatsteps.end());
    int min=-1;
    for(unsigned long i=0;i<heatsteps.size();i++) {
        if (heatsteps[i]!=min){
            heatinterval.push_back(heatsteps[i]);
//            qDebug("bekerül: %d min %d", heatsteps[i], min);
            min=heatsteps[i];
        }
    }
    reverse(heatinterval.begin(),heatinterval.end());


    intervalbal->clear();
    ui->graphicsView->setScene(intervalbal);



    QBrush redbrush (Qt::red);
    QBrush bluebrush (Qt::blue);
    QBrush blackbrush (Qt::black);
    QBrush whitebrush (Qt::white);
    QBrush yellowbrush (Qt::yellow);
    QPen outline (Qt::black);
    QPen outline2 (Qt::black);
    QPen redpen (Qt::red);
    QPen bluepen (Qt::blue);
    QPen blackpen (Qt::black);
    outline.setWidth(2);
    outline2.setWidth(1);
    redpen.setWidth(2);
    bluepen.setWidth(2);

    //int rows=300/heatinterval.size();
    int rows=35;
    qDebug() << rows;
    for (unsigned long i=0;i<heatinterval.size();i++) {
       //qDebug() << 300- rows << "300-row";
       qDebug() <<  rows <<"row"<<heatinterval[i];
        line = intervalbal->addLine(30,rows+12,5+(flows.size()*35),rows+12,blackpen);
        text = intervalbal->addText(QString::number(heatinterval[i]));
        text->setX(0);
        text->setY(rows);

        //text = intervalbal->addText(QString::number(300-rows));
        //text->setPos(305,300-rows);

       rows=rows+35;
        //rectangle = intervalbal->addRect(-300,150-)
    }
    //rectangle = intervalbal->addRect(305,287,10,10,outline,redbrush);
    //rectangle = intervalbal->addRect(305,42,10,10,outline,bluebrush);
    //steam populations
    int pindex=1;
    for (vector<Flow>::iterator j=flows.begin();j<flows.end();j++) {
        double start = j->getAST();
        double end = j->getATT();
        int heatsindex, heateindex;
        for (unsigned long i=0;i<heatinterval.size();i++){
            if(start==heatinterval[i]){
                heatsindex=i+1;
            }
            if(end==heatinterval[i]){
                heateindex=i+1;
            }
        }
        //qDebug() << heatsindex << "heat s ind"<<start << j->getIsHeat();
        //qDebug() << heateindex << "heat e ind"<<end;


        if (j->getIsHeat()) {
            rectangle = intervalbal->addRect(10+(pindex*30),3+(heatsindex*35),10,10,outline,redbrush);
            line = intervalbal->addLine(15+(pindex*30),12+(heatsindex*35),15+(pindex*30),12+(heateindex*35),redpen);

            //poligon for the line end arrow
            poli << QPoint(15+(pindex*30),12+(heateindex*35));  //line end point
            poli << QPoint(15+(pindex*30)-5,12+(heateindex*35)-5); //line end -5;-5
            poli << QPoint(15+(pindex*30)+5,12+(heateindex*35)-5); //line end +5;-5
            poligon = intervalbal->addPolygon(poli,redpen,redbrush);
            poli.clear();

            qDebug() << 10+(pindex*30) << " -X" << 5+(heatsindex*35) << " -Y";
            qDebug() << 15+(pindex*30) << " -vonalend-" << 12+(heateindex*35);
            qDebug() << 15+(pindex*30) << " -vonalstart-" << 12+(heatsindex*35);
        } else {
            rectangle = intervalbal->addRect(10+(pindex*30),12+(heatsindex*35),10,10,outline,bluebrush);
            line = intervalbal->addLine(15+(pindex*30),12+(heatsindex*35),15+(pindex*30),12+(heateindex*35),bluepen);

            //poligon for the line end arrow
            poli << QPoint(15+(pindex*30),12+(heateindex*35));  //line end point
            poli << QPoint(15+(pindex*30)-5,12+(heateindex*35)+5); //line end -5;+5
            poli << QPoint(15+(pindex*30)+5,12+(heateindex*35)+5); //line end +5;+5
            poligon = intervalbal->addPolygon(poli,bluepen,bluebrush);
            poli.clear();

            qDebug() << 10+(pindex*30) << " -X" << 5+(heatsindex*35) << " -Y";
            qDebug() << 15+(pindex*30) << " -vonalend-" << 12+(heateindex*35);
            qDebug() << 15+(pindex*30) << " -vonalstart-" << 12+(heatsindex*35);

        }
        pindex++;
    }

        //rectangle = intervalbal->addRect(-900,heatinterval[0],-20,20,20,outline,redbrush);
    /*rectangle = intervalbal->addRect(0,heatinterval[0],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[1],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[2],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[3],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[4],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[5],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[6],10,10,outline,redbrush);
    rectangle = intervalbal->addRect(0,heatinterval[7],10,10,outline,redbrush);
*/
    //text = intervalbal->addText()
    //line = intervalbal->addLine(0,-30,0,30,redpen);

    //qDebug() << heatinterval[0];
    //rectangle = intervalbal->addRect(130,0-heatinterval[0],-10,10,outline,bluebrush);
    //rectangle = intervalbal->addRect(-450,20,10,10,outline,redbrush);

/*
    line = scene->addLine(-890,0-hot1.adjustedsupplytemperature,-890,0-hot1.adjustedtargettemperature,redpen);
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


void MainWindow::on_addFlow_clicked()
{

    int maxheatcnt=0, maxcoldcnt=0;
    if (!ui->deltaT->text().isEmpty()) {

        ui->inputTable->insertRow(ui->inputTable->rowCount());
        ui->inputTable->horizontalHeader()->setStretchLastSection(true); //elvileg strech-el
        QTableWidgetItem *st01 = new QTableWidgetItem(QString(ui->inST->text()));
        qDebug() << ui->inST->text();
        qDebug() << ui->inputTable->rowCount();
        ui->inputTable->setItem(ui->inputTable->rowCount()-1,1,st01);
        QTableWidgetItem *st02 = new QTableWidgetItem(QString(ui->inTT->text()));
        ui->inputTable->setItem(ui->inputTable->rowCount()-1,2,st02);
        QTableWidgetItem *st03 = new QTableWidgetItem(QString(ui->inHC->text()));
        ui->inputTable->setItem(ui->inputTable->rowCount()-1,3,st03);

        newflow.setSTemp(ui->inST->text().toDouble());
        newflow.setTTemp(ui->inTT->text().toDouble());
        newflow.setHCap(ui->inHC->text().toDouble());
        if (newflow.getSTemp()>newflow.getTTemp()){
            newflow.setIsHeat(true);
        } else {
            newflow.setIsHeat(false);
        }
        newflow.setAST(ui->deltaT->text().toDouble());
        newflow.setATT(ui->deltaT->text().toDouble());
        flows.push_back(newflow);

        //calculating the highest cold and hot ID
        for(std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
            if (j->getIsHeat()){
                maxheatcnt++;
            } else {
                maxcoldcnt++;
            }
        }
        //creating the flowname
        if (newflow.getIsHeat()){
            newflow.setFlowName(QString("H%1").arg(maxheatcnt));
        } else {
            newflow.setFlowName(QString("C%1").arg(maxcoldcnt));
        }
        flows.pop_back();           //remove the last item
        flows.push_back(newflow);   //reinsert with the flow name
        QTableWidgetItem *st00 = new QTableWidgetItem(QString(newflow.getFlowName()));
        ui->inputTable->setItem(ui->inputTable->rowCount()-1,0,st00);
        QTableWidgetItem *st04 = new QTableWidgetItem(QString::number(newflow.getAST()));
        ui->inputTable->setItem(ui->inputTable->rowCount()-1,4,st04);
        QTableWidgetItem *st05 = new QTableWidgetItem(QString::number(newflow.getATT()));
        ui->inputTable->setItem(ui->inputTable->rowCount()-1,5,st05);

        ui->inST->clear();
        ui->inTT->clear();
        ui->inHC->clear();
    } else {
        QMessageBox::warning(this,tr("INFO"),tr("The deltaT must be set!"));
        ui->deltaT->setFocus();
    }

}
