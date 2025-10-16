#ifndef MUTEX_H
#define MUTEX_H

#include <QObject>
#include <QThread>
#include <QString>
#include <QMutex>
#define IT_NUM 100

class Mutex : public QThread
{
    Q_OBJECT
public:
    Mutex(); //constructor
    ~Mutex(); //destructor

    //getter and setter
    QString getSequence();
    void setDelay();
    void stop();
    void restart();


private :
    QString character;
    QString sequence;
    bool running;
    int delay;

protected:
    void run() override;


signals:
    void signalMutex(QString);

};

#endif // MUTEX_H
