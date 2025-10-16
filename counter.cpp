#include "counter.h"

Counter::Counter(int value, int delay): sequence(value), running(true), delay(delay)
{
    this->value = value;
    this->delay = delay;
}

void Counter::run(){
    forever{
        msleep(delay);
        if(!running) break;
        emit signalCounter(sequence);
    }
}

int Counter::getSequence(){
    return sequence;
}

void Counter::setSequence(int value){
    this->sequence = value;
}

void Counter::setDelay(int delay){
    this->delay = delay;
}

int Counter::getDelay(){
    return delay;
}

void Counter::stop(){
    this->running = false;
    wait();
}

void Counter::restart(){
    this->running = true;
    QThread::start();
}
