#include "flow.h"
//#include "mainwindow.h"



Flow::Flow()
{
    //Cnt_Flows++;
    //this->ID=Cnt_Flows;
}


QString Flow::getFlowName()
{
    return FlowName;
}

double Flow::getSTemp()
{
    return STemp;
}

double Flow::getTTemp()
{
    return TTemp;
}

double Flow::getHCap()
{
    return HCap;
}

bool Flow::getIsHeat()
{
    return IsHeat;
}

double Flow::getAST()
{
    return AST;
}

double Flow::getATT()
{
    return ATT;
}


void Flow::setFlowName(QString value)
{
    FlowName=value;
}

void Flow::setSTemp(double value)
{
    STemp = value;
}

void Flow::setTTemp(double value)
{
    TTemp=value;
}

void Flow::setHCap(double value)
{
    HCap=value;
}

void Flow::setIsHeat(bool value)
{
    IsHeat=value;
}

void Flow::setAST(double deltaT)
{
    if(this->IsHeat){
        AST = this->STemp-deltaT/2;
    } else {
        AST = this->STemp+deltaT/2;
    }

}

void Flow::setATT(double deltaT)
{
    if(this->IsHeat){
        ATT = this->TTemp-deltaT/2;
    } else {
        ATT = this->TTemp+deltaT/2;
    }
}



Flow::~Flow()
{

}

