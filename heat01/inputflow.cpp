#include "inputflow.h"
#include "ui_inputflow.h"
#include <Flow.h>
#include <QDebug>

using namespace::std;

InputFlow::InputFlow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputFlow)
{
    ui->setupUi(this);
}

InputFlow::~InputFlow()
{
    delete ui;
}
void InputFlow::SetFlows(std::vector<Flow> *flowvector){
    Flows=flowvector;
    QDebug() << "Flowvector set";
}

void InputFlow::on_pushButton_clicked()
{
    Flow *flow = new Flow;
    if (ui->IsHeat->isChecked()){
        QDebug() << "Heat is checked";
        flow->setIsHeat(true);
    } else if(ui->isCold->isChecked()) {
        QDebug() << "Cold is checked";
        flow->setIsHeat(false);
    } else {
        QDebug() << "no type selected";
    }
    flow->setFlowName(ui->FlowId);
    flow->setInFromTemp(ui->SupplyT);
    flow->setInToTemp(ui->TargetT);
    flow->setInCap(ui->HeatCap);
    flows
}
