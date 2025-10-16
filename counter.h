#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QThread>

class Counter : public QThread
{
    Q_OBJECT
public:
    //constructor
    Counter(int value, int delay);

    //getters and setters
    int getSequence();
    void setSequence(int);
    int getDelay();
    void setDelay(int);

    void stop();
    void restart();

private:
    int value;
    int sequence;
    bool running;
    int delay;

protected:
    void run();

signals:
    void signalCounter(int);
};

#endif // COUNTER_H
