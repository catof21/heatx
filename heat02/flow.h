#ifndef FLOW_H
#define FLOW_H

#include <QObject>
#include <QDebug>
#include <QString>
//#include <mainwindow.h>

class Flow
{
public:
    Flow();

    ~Flow();
//    double getID();
    QString getFlowName();
    double getSTemp();
    double getTTemp();
    double getHCap();
    bool getIsHeat();
    double getAST();
    double getATT();

//    void setID(int value);
    void setFlowName(QString value);
    void setSTemp(double value);
    void setTTemp(double value);
    void setHCap(double value);
    void setIsHeat(bool value);
    void setAST(double deltaT);
    void setATT(double deltaT);

private:
 //   int ID;
    QString FlowName;  //name or Id
    double  STemp;        //input heat from in Celsius
    double  TTemp;        //input heat to in Celsius
    double  HCap;         //input heat capacity Flowrate in KW/Celsius
    bool IsHeat;       //heat_Flow = true, cold_Flow = false
    double  AST;          //adjusted supply temp
    double  ATT;          //adjusted target temp

};

#endif // FLOW_H
