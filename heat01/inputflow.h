#ifndef INPUTFLOW_H
#define INPUTFLOW_H

#include <QDialog>
#include <Flow.h>

namespace Ui {
class InputFlow;
}

class InputFlow : public QDialog
{
    Q_OBJECT

public:
    explicit InputFlow(QWidget *parent = 0);
    ~InputFlow();

    void SetFlows(std::vector<Flow> *flowvector);

    void on_pushButton_clicked();
private:
    Ui::InputFlow *ui;
    std::vector<Flow> *Flows;
};

#endif // INPUTFLOW_H
