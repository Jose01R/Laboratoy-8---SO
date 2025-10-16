#ifndef BUFFER_H
#define BUFFER_H
#include <QDialog>
#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QVector>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QTimer>

class Buffer
{
public:
    Buffer(int cap);
    void add(int);
    int extract();

    //atributos
    QVector<int> data;
    int capacity;
    QMutex mutex;
    QWaitCondition full;
    QWaitCondition empty;

    //definimos algunos métodos
    bool isFull(){
        return data.size()==capacity;
    }
    bool isEmpty(){
        return data.isEmpty();
    }


};

#endif // BUFFER_H
