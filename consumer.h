#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include <QThread>
#include <QTextEdit>
#include <QRandomGenerator>
#include "buffer.h"
class Consumer : public QThread
{
    Q_OBJECT
public:
    //explicit Consumer(QObject *parent = nullptr);
    //CONSTRUCTOR
    Consumer(Buffer *b, QTextEdit *txt);

    //atributos publicos
    Buffer *buffer;
    QTextEdit *output;
    bool active = true;

protected:
    void run() override;

signals:
};

#endif // CONSUMER_H
