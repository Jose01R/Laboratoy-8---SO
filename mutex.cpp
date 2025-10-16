#include "mutex.h"

//VARIABLE GLOBAL
QMutex mutex;

/*
 * Mutex::Mutex(QObject *parent)
    : QObject{parent}
{}
*/

Mutex::Mutex(){}
Mutex::~Mutex(){
    QThread::deleteLater(); //para que termine los hilos
}

void Mutex::run(){
    mutex.lock(); //entra en region critica

    for(int i = 0; i < IT_NUM; i++){
        this->sequence.toStdString() += this->character.toStdString();
        msleep(this->delay);

        if(!running) break; //rompe el bucle

        //ahora enviamos sennal
        emit this->signalMutex(this->sequence);
    }

    mutex.unlock(); //sale region critica
}

QString Mutex::getSequence(){
    return this->sequence;
}

void Mutex::stop(){
    this->running = false;
}

void Mutex::restart(){
    this->running = true;
    QThread::start(); //lanza el hilo
}
