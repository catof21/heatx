#ifndef INPUTFLOW_H
#define INPUTFLOW_H

#include <QDialog>

namespace Ui {
class InputFlow;
}

class InputFlow : public QDialog
{
    Q_OBJECT

public:
    explicit InputFlow(QWidget *parent = 0);
    ~InputFlow();

private:
    Ui::InputFlow *ui;
};

#endif // INPUTFLOW_H
