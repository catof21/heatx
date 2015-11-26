#include "Flow.h"
#include <QtDebug>
#include <QString>


using namespace::std;


Flow::Flow(QObject *parent) : QObject(parent)
{

}

Flow::~Flow()
{

}

QString Flow::getFlowName()
{
    return FlowName;
}

double Flow::getInFromTemp()
{
    return InFromTemp;
}

double Flow::getInToTemp()
{
    return InToTemp;
}

double Flow::getInCap()
{
    return InCap;
}

void Flow::setFlowName(QString str)
{
    FlowName  = str;
}

void Flow::setInFromTemp(double n)
{
    InFromTemp = n;
}

void Flow::setInToTemp(double n)
{
    InToTemp = n;
}

void Flow::setInCap(double n)
{
    InCap = n;
}

void Flow::setIsHeat(bool t)
{
    IsHeat = t;
}
