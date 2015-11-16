#ifndef FLOW_H
#define FLOW_H

#include <QObject>

class flow : public QObject
{
    Q_OBJECT
public:
    explicit flow(QObject *parent = 0);
    ~flow();

signals:

public slots:
};

#endif // FLOW_H
