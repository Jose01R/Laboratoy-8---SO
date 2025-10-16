#include "consumer.h"

/*Consumer::Consumer(QObject *parent)
    : QObject{parent}
{}*/

Consumer::Consumer(Buffer *b, QTextEdit *txt) : buffer(b), output(txt){}

void Consumer::run(){
    while(active){
        buffer->mutex.lock();
        while(buffer->isEmpty()){
            buffer->empty.wait(&buffer->mutex);
        }

        //se extrae un item del buffer
        int item = buffer->extract();
        output->append(QString("Consumer: consume %1").arg(item));
        buffer->full.wakeOne(); //despierta al productor
        buffer->mutex.unlock();
        QThread::msleep(1000); //simula aleatoriedad
    }
}
