#ifndef FLOW_H
#define FLOW_H

#include <QObject>
#include <QString>



class Flow : public QObject
{
    Q_OBJECT
private:
    QString FlowName;       //name or Id
    double  InFromTemp;     //input heat from in Celsius
    double  InToTemp;       //input heat to in Celsius
    double  InCap;          //input heat capacity Flowrate in KW/Celsius
    bool    IsHeat;         //heat_Flow = true, cold_Flow = false

public:
    explicit Flow(QObject *parent = 0);
    ~Flow();
    double getInFromTemp();
    double getInToTemp();
    double getInCap();
    QString getFlowName();


    void setInFromTemp(double n);
    void setInToTemp(double n);
    void setInCap(double n);
    void setIsHeat(double infrom, double into);
public slots:
};

#endif // Flow_H
