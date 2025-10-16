#include "messenger.h"
#include <QRandomGenerator>

Messenger::Messenger(const QString &msg, QObject *parent)
    : QThread(parent), message(msg)
{
}

void Messenger::run()
{
    //cada hilo mostrara su mensaje 5 veces, en distintas posiciones
    for (int i = 0; i < 5; ++i) {
        //posiciones tienen un valor random para que caigan en diferentes partes de la pantalla
        int x = QRandomGenerator::global()->bounded(50, 400); //pos x
        int y = QRandomGenerator::global()->bounded(100, 300); //pos y

        emit messageReady(message, QPoint(x, y));

        QThread::msleep(1000 + QRandomGenerator::global()->bounded(2000)); //espera random
    }
}
