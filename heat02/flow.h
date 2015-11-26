#ifndef FLOW_H
#define FLOW_H

#include <QObject>
#include <QDebug>
#include <QString>

class Flow
{
public:
    Flow();

    ~Flow();
    int getID() const;
    QString getFlowName();
    int getSTemp();
    int getTTemp();
    int getHCap();
    bool getIsHeat();
    int getAST();
    int getSTT();

    void setFlowName(QString value);
    void setSTemp(int value);
    void setTTemp(int value);
    void setHCap(int value);
    void setIsHeat(bool value);
    void setAST(int deltaT);
    void setATT(int deltaT);

private:
    int ID;
    QString FlowName;  //name or Id
    int  STemp;        //input heat from in Celsius
    int  TTemp;        //input heat to in Celsius
    int  HCap;         //input heat capacity Flowrate in KW/Celsius
    bool IsHeat;       //heat_Flow = true, cold_Flow = false
    int  AST;          //adjusted supply temp
    int  ATT;          //adjusted target temp

};

#endif // FLOW_H
