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

//    newflow.setSTemp(180);
//    newflow.setTTemp(80);
//    newflow.setHCap(20);
//    newflow.setFlowName("H1");
//    newflow.setIsHeat(true);
//    newflow.setAST(ui->deltaT->text().toDouble());
//    newflow.setATT(ui->deltaT->text().toDouble());
//    flows.push_back(newflow);

//    newflow.setSTemp(130);
//    newflow.setTTemp(40);
//    newflow.setHCap(40);
//    newflow.setFlowName("H2");
//    newflow.setIsHeat(true);
//    newflow.setAST(ui->deltaT->text().toDouble());
//    newflow.setATT(ui->deltaT->text().toDouble());
//    flows.push_back(newflow);

//    newflow.setSTemp(60);
//    newflow.setTTemp(100);
//    newflow.setHCap(80);
//    newflow.setFlowName("C1");
//    newflow.setIsHeat(false);
//    newflow.setAST(ui->deltaT->text().toDouble());
//    newflow.setATT(ui->deltaT->text().toDouble());
//    flows.push_back(newflow);

//    newflow.setSTemp(30);
//    newflow.setTTemp(120);
//    newflow.setHCap(36);
//    newflow.setFlowName("C2");
//    newflow.setIsHeat(false);
//    newflow.setAST(ui->deltaT->text().toDouble());
//    newflow.setATT(ui->deltaT->text().toDouble());
//    flows.push_back(newflow);
//    //testing data end



    intervalbal = new QGraphicsScene(this);
    ui->graphicsView->setScene(intervalbal);
    hfcascade = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(hfcascade);
    graph = new QGraphicsScene(this);
    ui->curves->setScene(graph);
    grid = new QGraphicsScene(this);
    ui->dgrid->setScene(grid);

    header = QFont("arial",13,QFont::Bold);
    small = QFont("default",10);



}

MainWindow::~MainWindow()
{
    delete ui;
    delete hfcascade;
    delete intervalbal;
}

void MainWindow::on_btn_ok_clicked()  //calculation
{

    QBrush redbrush (Qt::red);
    QBrush bluebrush (Qt::blue);
    QBrush blackbrush (Qt::black);
    QBrush whitebrush (Qt::white);
    QBrush yellowbrush (Qt::yellow);
    QBrush graybrush (Qt::gray);
    QPen outline (Qt::black);
    QPen outline2 (Qt::black);
    QPen redpen (Qt::red);
    QPen bluepen (Qt::blue);
    QPen blackpen (Qt::black);
    QPen blackpen_s (Qt::black);
    QPen greenpen (Qt::green);
    QPen graypen (Qt::gray);
    outline.setWidth(2);
    outline2.setWidth(1);
    redpen.setWidth(2);
    bluepen.setWidth(2);
    blackpen_s.setWidth(2);

    intervalbal->clear();
    ui->graphicsView->setScene(intervalbal);
    hfcascade->clear();
    ui->graphicsView_2->setScene(hfcascade);
    graph->clear();
    ui->curves->setScene(graph);
    grid->clear();
    ui->dgrid->setScene(grid);

        //heat steps
    vector<double> heatsteps;    //with deltaTemps
    vector<double> heatsteps_r;  //with real temps
    vector<double> heatinterval; //with deltaTemps
    vector<double> heatinterval_r; //with real temps
    vector<double> heatint_hot;
    vector<double> heatint_cold;
    vector<double> heatstp_hot;
    vector<double> heatstp_cold;
    vector<double> dhinterval;
    vector<double> dcp;
    vector<double> cascade;
    double cascflow,minflow,pinch;
    int pinchpoint_idx;
    for (std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
        //if deltaT is changed
        j->setAST(ui->deltaT->text().toDouble());
        j->setATT(ui->deltaT->text().toDouble());

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


    //int rows=300/heatinterval.size();
    int rows=35;
    //qDebug() << rows;
    for (unsigned long i=0;i<heatinterval.size();i++) {
       //qDebug() << 300- rows << "300-row";
       //qDebug() <<  rows <<"row"<<heatinterval[i];
        //dinamical line ---
        //line = intervalbal->addLine(30,rows+12,5+(flows.size()*35),rows+12,blackpen);
        //static line for the table
        line = intervalbal->addLine(30,rows+12,600,rows+12,blackpen);
        text = intervalbal->addText(QString::number(heatinterval[i]));
        text->setX(0);
        text->setY(rows);

       rows=rows+35;
    }

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
            //heatflow
            text = intervalbal->addText(j->getFlowName(),header);
            text->setX((pindex*30)+3);
            text->setY(15);
            rectangle = intervalbal->addRect(10+(pindex*30),3+(heatsindex*35),10,10,outline,redbrush);
            line = intervalbal->addLine(15+(pindex*30),12+(heatsindex*35),15+(pindex*30),12+(heateindex*35),redpen);

            //poligon for the line end arrow
            poli << QPoint(15+(pindex*30),12+(heateindex*35));  //line end point
            poli << QPoint(15+(pindex*30)-5,12+(heateindex*35)-5); //line end -5;-5
            poli << QPoint(15+(pindex*30)+5,12+(heateindex*35)-5); //line end +5;-5
            poligon = intervalbal->addPolygon(poli,redpen,redbrush);
            poli.clear();

/*            qDebug() << 10+(pindex*30) << " -X" << 5+(heatsindex*35) << " -Y";
            qDebug() << 15+(pindex*30) << " -vonalend-" << 12+(heateindex*35);
            qDebug() << 15+(pindex*30) << " -vonalstart-" << 12+(heatsindex*35);
*/
      } else { //coldflow
            text = intervalbal->addText(j->getFlowName(),header);
            text->setX((pindex*30)+3);
            text->setY(15);
            rectangle = intervalbal->addRect(10+(pindex*30),12+(heatsindex*35),10,10,outline,bluebrush);
            line = intervalbal->addLine(15+(pindex*30),12+(heatsindex*35),15+(pindex*30),12+(heateindex*35),bluepen);

            //poligon for the line end arrow
            poli << QPoint(15+(pindex*30),12+(heateindex*35));  //line end point
            poli << QPoint(15+(pindex*30)-5,12+(heateindex*35)+5); //line end -5;+5
            poli << QPoint(15+(pindex*30)+5,12+(heateindex*35)+5); //line end +5;+5
            poligon = intervalbal->addPolygon(poli,bluepen,bluebrush);
            poli.clear();

/*            qDebug() << 10+(pindex*30) << " -X" << 5+(heatsindex*35) << " -Y";
            qDebug() << 15+(pindex*30) << " -vonalend-" << 12+(heateindex*35);
            qDebug() << 15+(pindex*30) << " -vonalstart-" << 12+(heatsindex*35);
*/
        }
        pindex++;
    }
    //separator vertical line
    int nextwidth = pindex*30;
    //line = intervalbal->addLine(15+(pindex*30),10,15+(pindex*30),5+rows,blackpen);
    line = intervalbal->addLine(15+nextwidth,10,15+nextwidth,5+rows,blackpen);
    text = intervalbal->addText("ΔT interval",header);
    text->setX(nextwidth+15);
    text->setY(15);
    // set x;y for the table row
    int cell_y=35+17;   //space between two rows and the gap
    //heat differences
    for (unsigned long i=0;i<heatinterval.size()-1;i++){
        //delta H interval vector, first step
        dhinterval.push_back(heatinterval[i]-heatinterval[i+1]);
        text = intervalbal->addText(QString::number(heatinterval[i]-heatinterval[i+1]),small);
        text->setX(nextwidth+30);
        text->setY(cell_y);
        cell_y=cell_y+35;
    }
    //next separator vertical line
    nextwidth = nextwidth+80;
    //line = intervalbal->addLine(15+(pindex*30),10,15+(pindex*30),5+rows,blackpen);
    line = intervalbal->addLine(15+nextwidth,10,15+nextwidth,5+rows,blackpen);
    text = intervalbal->addText("∑CPh-∑CPc",header);
    text->setX(nextwidth+15);
    text->setY(15);

    //next separator vertical line
    int nextwidth2 = nextwidth+80;
    line = intervalbal->addLine(15+nextwidth2,10,15+nextwidth2,5+rows,blackpen);
    text = intervalbal->addText("ΔH interval",header);
    text->setX(nextwidth2+15);
    text->setY(15);

    //next separator vertical line
    int nextwidth3 = nextwidth2+80;
    line = intervalbal->addLine(15+nextwidth3,10,15+nextwidth3,5+rows,blackpen);
    text = intervalbal->addText("Balance",header);
    text->setX(nextwidth3+15);
    text->setY(15);


    // set x;y for the table row
    cell_y=35+17;   //space between two rows and the gap
    //capacity diff

    dcp.push_back(0); //the first DCP is zero
    for (unsigned long i=1;i<heatinterval.size();i++){
        //qDebug() << heatinterval[i]<<" line "<<i;
        double currCP=0;
        for (vector<Flow>::iterator j=flows.begin();j<flows.end();j++) {
            //if match the heatinterval
            //qDebug() << heatinterval[i]<<" line "<<i <<" AST "<< j->getAST() << "ATT " <<j->getATT();
            if (heatinterval[i] < j->getAST() && heatinterval[i] >= j->getATT() && j->getIsHeat()){
                    currCP = currCP + j->getHCap();
                }
            if (heatinterval[i] >= j->getAST() && heatinterval[i] < j->getATT() && !j->getIsHeat()){
                    currCP = currCP - j->getHCap();
                }
                //qDebug() << currCP << " aktcp " <<j->getFlowName();
            }
        //qDebug() << currCP << " aktcp " << dhinterval[i-1]*currCP;
        //qDebug() << heatinterval[i] << "heatinterval" << dhinterval[i];
        //put the DeltaCP to heatinterval
        dcp.push_back(dhinterval[i-1]*currCP);
        //sum CP
        text = intervalbal->addText(QString::number(currCP),small);
        text->setX(nextwidth+30);
        text->setY(cell_y);
        //delta H
        text = intervalbal->addText(QString::number(dhinterval[i-1]*currCP),small);
        text->setX(nextwidth2+30);
        text->setY(cell_y);
        //balance
        QString balance;
        if (dhinterval[i-1]*currCP > 0) {
            balance = "Surplus";
        } else if (dhinterval[i-1]*currCP < 0) {
            balance = "Deficit";
        } else {
            balance = "null";
        }
        text = intervalbal->addText(balance,small);
        text->setX(nextwidth3+30);
        text->setY(cell_y);

        //shift cells right
        cell_y=cell_y+35;
    }

    /* ----------------------------------------------------------------------------------------
     * Cascade for Positive Heat Flow
     * Graphical Scene
     * inputs: heatinterval, dhinterval, dcp
     * ----------------------------------------------------------------------------------------
     */
    cascflow=0;
    minflow=dcp[2];
    //original flow
    for (unsigned long i=0;i<heatinterval.size();i++){
        //qDebug() << heatinterval[i]<<" line "<<i;
        QString tmp=QString::number(heatinterval[i])+"°C";
        text = hfcascade->addText(tmp,header);
        text->setX(-5);
        text->setY(35+(i*40));
        line=hfcascade->addLine(44,35+(i*40),44,53+(i*40),blackpen);

        //poligon for the line end arrow
        poli << QPoint(44,53+(i*40));  //line end point
        poli << QPoint(44-5,53+(i*40)-5); //line end -5;-5
        poli << QPoint(44+5,53+(i*40)-5); //line end +5;-5
        poligon = hfcascade->addPolygon(poli,blackpen,blackbrush);
        poli.clear();

        text = hfcascade->addText(QString::number(cascflow),small);
        text->setX(85);
        text->setY(35+(i*40));

        if (i+1<heatinterval.size()){
            rectangle = hfcascade->addRect(25,55+(i*40),40,20,outline);
            text = hfcascade->addText(QString::number(dcp[i+1]),small);
            text->setX(28);
            text->setY(55+(i*40));
            cascflow=cascflow+dcp[i+1];
            if (minflow > cascflow) {
                minflow=cascflow;
                pinchpoint_idx = i+1;
            }
            line=hfcascade->addLine(85,50+(i*40),65,60+(i*40),blackpen);
            line=hfcascade->addLine(65,65+(i*40),85,75+(i*40),blackpen);
        }

    }
    //modified flow with minpoint of flow
    minflow=minflow*-1;
    cascflow=0;
    for (unsigned long i=0;i<heatinterval.size();i++){
        //without the heatinterval
        line=hfcascade->addLine(140,35+(i*40),140,53+(i*40),blackpen);
        //poligon for the line end arrow
        poli << QPoint(140,53+(i*40));  //line end point
        poli << QPoint(140-5,53+(i*40)-5); //line end -5;-5
        poli << QPoint(140+5,53+(i*40)-5); //line end +5;-5
        poligon = hfcascade->addPolygon(poli,blackpen,blackbrush);
        poli.clear();

        text=hfcascade->addText(QString::number(cascflow+minflow),small);
        text->setX(180);
        text->setY(35+(i*40));
        if (i+1<heatinterval.size()){
            rectangle = hfcascade->addRect(120,55+(i*40),40,20,outline);
            text = hfcascade->addText(QString::number(dcp[i+1]),small);
            text->setX(123);
            text->setY(55+(i*40));
            line=hfcascade->addLine(180,50+(i*40),160,60+(i*40),blackpen);
            line=hfcascade->addLine(160,65+(i*40),180,75+(i*40),blackpen);
        }
        cascflow=cascflow+dcp[i+1];
        cascade.push_back(cascflow+minflow);
    }
    //results
    pinch=heatinterval[pinchpoint_idx];
    double pinch_h=pinch+(ui->deltaT->text().toDouble()/2);
    double pinch_c=pinch-(ui->deltaT->text().toDouble()/2);
    ui->qhmin->setText(QString::number(minflow));
    ui->qcmin->setText(QString::number(cascade[cascade.size()-1]));
    ui->tpinch_int->setText(QString::number(pinch));
    ui->tpinch_h->setText(QString::number(pinch_h));
    ui->tpinch_c->setText(QString::number(pinch_c));

    //-----------------------------------------------------------
    //Graph for the flows
    //get the heatinterval with real temparatures
    //-----------------------------------------------------------

    for (std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
//        ui->plainTextEdit->setPlainText(QString::number(j->getAST()));
            heatsteps_r.push_back(j->getSTemp());
            heatsteps_r.push_back(j->getTTemp());
            if (j->getIsHeat()) {
                heatstp_hot.push_back(j->getSTemp());
                heatstp_hot.push_back(j->getTTemp());
            } else {
                heatstp_cold.push_back(j->getSTemp());
                heatstp_cold.push_back(j->getTTemp());
            }
        }
    min=-1;
    sort(heatsteps_r.begin(),heatsteps_r.end());
    sort(heatstp_hot.begin(),heatstp_hot.end());
    sort(heatstp_cold.begin(),heatstp_cold.end());
    for(unsigned long i=0;i<heatsteps_r.size();i++) {
        if (heatsteps_r[i]!=min){
            heatinterval_r.push_back(heatsteps_r[i]);
            //qDebug() <<"bekerül: " << heatsteps_r[i]<<  " min "<< min;
            min=heatsteps_r[i];
        }
    }
    min=-1;
    for(unsigned long i=0;i<heatstp_hot.size();i++) {
        if (heatstp_hot[i]!=min){
            heatint_hot.push_back(heatstp_hot[i]);
            min=heatstp_hot[i];
        }
    }
    min=-1;
    for(unsigned long i=0;i<heatstp_cold.size();i++) {
        if (heatstp_cold[i]!=min){
            heatint_cold.push_back(heatstp_cold[i]);
            min=heatstp_cold[i];
        }
    }
    reverse(heatinterval_r.begin(),heatinterval_r.end());
    reverse(heatint_hot.begin(),heatint_hot.end());
    reverse(heatint_cold.begin(),heatint_cold.end());

    for(unsigned long i=0;i<heatinterval_r.size();i++){
        text = graph->addText(QString::number(heatinterval_r[i]),small);
        text->setX(-35);
        text->setY((-heatinterval_r[i])-10);
        line = graph->addLine(-5,-(heatinterval_r[i]),500,-(heatinterval_r[i]),graypen);
    }

    //the graph grid with names
    line = graph->addLine(0,0,0,-250,blackpen_s);
    line = graph->addLine(0,0,550,0,blackpen_s);
    //poligon for the line end arrow
    poli << QPoint(0,-250);  //line end point
    poli << QPoint(-5,-245); //line end -5;+5
    poli << QPoint(5,-245); //line end +5;+5
    poligon = graph->addPolygon(poli,blackpen_s,blackbrush);
    poli.clear();

    poli << QPoint(550,0);  //line end point
    poli << QPoint(545,-5); //line end -5;-5
    poli << QPoint(545, 5); //line end -5;+5
    poligon = graph->addPolygon(poli,blackpen_s,blackbrush);
    poli.clear();

    text=graph->addText("T(°C)",header);
    text->setX(-35);
    text->setY(-250);
    text=graph->addText("H(kW)",header);
    text->setX(510);
    text->setY(10);
    //aspect ratio
    double asp_h=0,asp_c=0,asp=0;
    for(std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
        if(j->getIsHeat()) {
            asp_h=asp_h+((j->getSTemp()-j->getTTemp())*j->getHCap());
        } else {
            asp_c=asp_c+((j->getTTemp()-j->getSTemp())*j->getHCap());
        }
    }
    if(asp_c>asp_h) {
        asp=asp_c/500;
    } else {
        asp=asp_h/500;
    }
    //flows
    int endp_hx=0, endp_cx=0, stp_hx=0, stp_cx=0;
    //heat graph
    reverse(heatint_hot.begin(),heatint_hot.end());
    for(unsigned long i=0;i<heatint_hot.size();i++){
        double currCP=0;
        for (std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
            if(j->getIsHeat()) {  // if heat flow
                if (heatint_hot[i] < j->getSTemp() && heatint_hot[i] >= j->getTTemp()){
                    currCP=currCP+j->getHCap();
                }
            }
        }
        //qDebug() << heatint_hot[i]<<" heat" << "cp "<<currCP;
        endp_hx=(currCP * (heatint_hot[i+1]-heatint_hot[i])) + endp_hx;
        //qDebug()<<"X " << endp_hx;
        //qDebug()<<"Y " << heatint_hot[i+1];
        if(currCP>0){
            line = graph->addLine(stp_hx/asp,-heatint_hot[i],endp_hx/asp,-heatint_hot[i+1],redpen);
            line = graph->addLine(endp_hx/asp,-5,endp_hx/asp,5,graypen);
            text = graph->addText(QString::number(endp_hx),small);
            text->setX((endp_hx/asp)-20);
            text->setY(5);
        }
        stp_hx=endp_hx;
    }
    //cold graph
    reverse(heatint_cold.begin(),heatint_cold.end());
    for(unsigned long i=0;i<heatint_cold.size();i++){
        double currCP=0;
        for (std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
            if(!j->getIsHeat()) {  // if heat flow
                if (heatint_cold[i] < j->getTTemp() && heatint_cold[i] >= j->getSTemp()){
                    currCP=currCP+j->getHCap();
                }
            }
        }
        //qDebug() << heatint_cold[i]<<" cold cp "<<currCP;
        endp_cx=(currCP * (heatint_cold[i+1]-heatint_cold[i])) + endp_cx;
        //qDebug()<<"X " << endp_cx;
        //qDebug()<<"Y " << heatint_cold[i+1];
        if(currCP>0) {
            line = graph->addLine(stp_cx/asp,-heatint_cold[i],endp_cx/asp,-heatint_cold[i+1],bluepen);
            line = graph->addLine(endp_cx/asp,-5,endp_cx/asp,5,graypen);
            text = graph->addText(QString::number(endp_cx),small);
            text->setX((endp_cx/asp)-20);
            text->setY(18);
        }
        stp_cx=endp_cx;
    }

    //-----------------------------------------------------------
    //design grid
    //-----------------------------------------------------------

     qDebug() << heatinterval_r[0] <<" "<< heatinterval_r[heatinterval_r.size()-1];
     //draw the flows
     for(std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){  //fill the above and below flows
         if(j->getTTemp()<pinch_h && j->getIsHeat()){
             newflow.setFlowName(j->getFlowName());
             newflow.setSTemp(j->getSTemp());
             newflow.setTTemp(j->getTTemp());
             newflow.setHCap(j->getHCap());
             newflow.setIsHeat(j->getIsHeat());
             flows_b.push_back(newflow);
             //qDebug()<<j->getTTemp()<< "hot target"<<newflow.getFlowName();
         }else if (j->getSTemp()<pinch_c && !j->getIsHeat()){
             newflow.setFlowName(j->getFlowName());
             newflow.setSTemp(j->getSTemp());
             newflow.setTTemp(j->getTTemp());
             newflow.setHCap(j->getHCap());
             newflow.setIsHeat(j->getIsHeat());
             flows_b.push_back(newflow);
             //qDebug()<<j->getTTemp()<< "cold supply"<<newflow.getFlowName();
         }
         if (j->getSTemp()>=pinch_h && j->getIsHeat()){
             newflow.setFlowName(j->getFlowName());
             newflow.setSTemp(j->getSTemp());
             newflow.setTTemp(j->getTTemp());
             newflow.setHCap(j->getHCap());
             newflow.setIsHeat(j->getIsHeat());
             flows_a.push_back(newflow);
             //qDebug()<<j->getTTemp()<< "hot supply above"<<newflow.getFlowName();
         }else if (j->getTTemp()>=pinch_c && !j->getIsHeat()){
             newflow.setFlowName(j->getFlowName());
             newflow.setSTemp(j->getSTemp());
             newflow.setTTemp(j->getTTemp());
             newflow.setHCap(j->getHCap());
             newflow.setIsHeat(j->getIsHeat());
             flows_a.push_back(newflow);
             //qDebug()<<j->getTTemp()<< "cold targeta above"<<newflow.getFlowName();
         }
     }
     double max_cold=0,max_heat=0;
     for(std::vector<Flow>::iterator j=flows_b.begin();j!=flows_b.end();j++){
        if(j->getIsHeat() && j->getHCap()>=max_heat){
            max_heat=j->getHCap();
        }
        if(!j->getIsHeat() && j->getHCap()>=max_cold) {
            max_cold=j->getHCap();
        }
     }

     int i=0;
     asp=550/heatinterval_r[0];
     for(std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
         if(j->getIsHeat()){
             if(j->getTTemp()<=pinch_h){
                 rectangle = grid->addRect(j->getSTemp()*asp,i-10,20,20,redpen,redbrush);
                 line = grid->addLine(j->getTTemp(),i,j->getSTemp()*asp,i,redpen);
                 text = grid->addText(j->getFlowName(),header);
                 text->setX(0);
                 text->setY(i-10);
                 //poligon for the line end arrow
                 poli << QPoint(j->getTTemp(),i);  //line end point
                 poli << QPoint(j->getTTemp()+5,i-5); //line end +5;-5
                 poli << QPoint(j->getTTemp()+5,i+5); //line end +5;+5
                 poligon = grid->addPolygon(poli,redpen,redbrush);
                 poli.clear();
                // line = grid->addLine(pinch_h*asp,i-20,pinch_h*asp,i+int(300/flows.size()/2),graypen);
                 if(j->getHCap()==max_heat){
                     ellipse = grid->addEllipse((pinch_h/2)*asp,i-10,20,20,graypen,graybrush);
                 }
                 i=i+int(300/flows.size());
             } else {
                 rectangle = grid->addRect(j->getSTemp()*asp,i-10,20,20,redpen,redbrush);
                 line = grid->addLine(j->getTTemp()*asp,i,j->getSTemp()*asp,i,redpen);
                 text = grid->addText(j->getFlowName(),header);
                 text->setX(0);
                 text->setY(i-10);
                 //poligon for the line end arrow
                 poli << QPoint(j->getTTemp()*asp,i);  //line end point
                 poli << QPoint(j->getTTemp()*asp+5,i-5); //line end +5;-5
                 poli << QPoint(j->getTTemp()*asp+5,i+5); //line end +5;+5
                 poligon = grid->addPolygon(poli,redpen,redbrush);
                 poli.clear();
                // line = grid->addLine(pinch_h*asp,i-20,pinch_h*asp,i+int(300/flows.size()/2),graypen);
//                 if(j->getHCap()==max_heat){
//                     ellipse = grid->addEllipse(15*asp,i-10,20,20,graypen,graybrush);
//                 }
                 i=i+int(300/flows.size());
             }
         } else {
             if(j->getSTemp()<pinch_c){
                 rectangle = grid->addRect(j->getSTemp(),i-10,20,20,bluepen,bluebrush);
                 line = grid->addLine(j->getTTemp()*asp,i,j->getSTemp(),i,bluepen);
                 text = grid->addText(j->getFlowName(),header);
                 text->setX(0);
                 text->setY(i-10);
                 //poligon for the line end arrow
                 poli << QPoint((j->getTTemp()*asp),i);  //line end point
                 poli << QPoint((j->getTTemp()*asp)-5,i-5); //line end -5;-5
                 poli << QPoint((j->getTTemp()*asp)-5,i+5); //line end -5;+5
                 poligon = grid->addPolygon(poli,bluepen,bluebrush);
                 poli.clear();
                 //line = grid->addLine(pinch_c*asp,i-20,pinch_c*asp,i+int(300/flows.size()/2),graypen);
                 if(j->getHCap()==max_cold){
                     ellipse = grid->addEllipse((pinch_c/2)*asp,i-10,20,20,graypen,graybrush);
                 }
                 i=i+int(300/flows.size());
             } else {
                 rectangle = grid->addRect((j->getSTemp()*asp)+pinch_c/2,i-10,20,20,bluepen,bluebrush);
                 line = grid->addLine((j->getSTemp()*asp)+pinch_c/2,i,j->getTTemp()*asp,i,bluepen);
                 text = grid->addText(j->getFlowName(),header);
                 text->setX(0);
                 text->setY(i-10);
                 //poligon for the line end arrow
                 poli << QPoint((j->getTTemp()*asp),i);  //line end point
                 poli << QPoint((j->getTTemp()*asp)-5,i-5); //line end -5;-5
                 poli << QPoint((j->getTTemp()*asp)-5,i+5); //line end -5;+5
                 poligon = grid->addPolygon(poli,bluepen,bluebrush);
                 poli.clear();
                 //line = grid->addLine(pinch_c*asp,i-20,pinch_c*asp,i+int(300/flows.size()/2),graypen);
//                 if(j->getHCap()==max_cold){
//                     ellipse = grid->addEllipse(15*asp,i-10,20,20,graypen,graybrush);
//                 }
                 i=i+int(300/flows.size());
             }

         }
     }
     //draw the pinch
     //?

     //qDebug()<<max_cold<< "maxc"<<max_heat;


}



void MainWindow::on_addFlow_clicked()  //add new row to the input table and to the flows
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

void MainWindow::on_pushButton_2_clicked() //removing a line from the input table
{
    for(std::vector<Flow>::iterator j=flows.begin();j!=flows.end();j++){
        //qDebug()<< ui->inputTable->item(ui->inputTable->currentRow(),0)->text() << "rowelement";
        if (ui->inputTable->item(ui->inputTable->currentRow(),0)->text() == j->getFlowName()) {
            flows.erase(j);
        }
        //qDebug() <<j->getFlowName()<<" flowname";
    }
    //qDebug()<< ui->inputTable->currentRow();
    ui->inputTable->removeRow(ui->inputTable->currentRow());

}
