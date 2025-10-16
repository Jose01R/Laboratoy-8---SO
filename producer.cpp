#include "producer.h"

/*Producer::Producer(QObject *parent)
    : QObject{parent}
{}*/

Producer::Producer(Buffer *b, QTextEdit *txt) : buffer(b), output(txt) {}

void Producer::run(){
    while(active){
        buffer->mutex.lock();
        while(buffer->isFull()){
            buffer->full.wait(&buffer->mutex);
        }

        //genermos un valor aleatorio
        int item = QRandomGenerator::global()->bounded(100);
        buffer->add(item);
        output->append(QString("Producer: produce %1").arg(item));
        buffer->empty.wakeOne(); //despuerta al consumidor
        buffer->mutex.unlock();
        QThread::msleep(800); //simulamos aleatoriedad
    }
}
