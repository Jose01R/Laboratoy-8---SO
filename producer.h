#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>
#include <QThread>
#include <QTextEdit>
#include <QRandomGenerator>
#include "buffer.h"

class Producer : public QThread
{
    Q_OBJECT
public:
    //explicit Producer(QObject *parent = nullptr);
    //CONSTRUCTOR
    Producer(Buffer *b, QTextEdit *txt);

    //atributos publicos
    Buffer *buffer;
    QTextEdit *output;
    bool active = true;

protected:
    void run() override;

signals:
};

#endif // PRODUCER_H
