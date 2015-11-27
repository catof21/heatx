#include "flow.h"
#include "mainwindow.h"



Flow::Flow()
{
    //Cnt_Flows++;
    //this->ID=Cnt_Flows;
}

int Flow::getID()
{
    return ID;
}

QString Flow::getFlowName()
{
    return FlowName;
}

int Flow::getSTemp()
{
    return STemp;
}

int Flow::getTTemp()
{
    return TTemp;
}

int Flow::getHCap()
{
    return HCap;
}

bool Flow::getIsHeat()
{
    return IsHeat;
}

int Flow::getAST()
{
    return AST;
}

int Flow::getATT()
{
    return ATT;
}

void Flow::setID(int value)
{
    ID=value;
}

void Flow::setFlowName(QString value)
{
    FlowName=value;
}

void Flow::setSTemp(int value)
{
    STemp = value;
}

void Flow::setTTemp(int value)
{
    TTemp=value;
}

void Flow::setHCap(int value)
{
    HCap=value;
}

void Flow::setIsHeat(bool value)
{
    IsHeat=value;
}

void Flow::setAST(int deltaT)
{
    if(this->IsHeat){
        AST = this->STemp-deltaT/2;
    } else {
        AST = this->STemp+deltaT/2;
    }

}

void Flow::setATT(int deltaT)
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

