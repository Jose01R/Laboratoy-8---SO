#include "dialogmessenger.h"
#include "ui_dialogmessenger.h"
#include <QRandomGenerator>

DialogMessenger::DialogMessenger(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::DialogMessenger),
    cleanupTimer(0)
{
    ui->setupUi(this);
    setWindowTitle("Messenger (with timers)");

    QStringList messages = {
        "It's a special day",
        "Qt Creator is wonderful",
        "Operating Systems",
        "What time it is?",
        "Multithreading rocks!"
    };

    //crear e iniciar hilos
    for (int i = 0; i < 5; ++i) {
        threads[i] = new Messenger(messages[i], this);

        //conectamos la signal (messageReady)
        connect(threads[i], &Messenger::messageReady,
                this, &DialogMessenger::showMessage);

        threads[i]->start();
    }

    //timer para limpiar mensajes viejos
    cleanupTimer = startTimer(1000); //1 seg
}

DialogMessenger::~DialogMessenger()
{
    if (cleanupTimer)
        killTimer(cleanupTimer);

    for (int i = 0; i < 5; ++i) {
        if (threads[i]->isRunning())
            threads[i]->wait();
        delete threads[i];
    }

    qDeleteAll(messageLabels);
    delete ui;
}

//metodo para mostrar mssg - le ponemos estilo al label
void DialogMessenger::showMessage(const QString &msg, const QPoint &pos)
{
    QLabel *label = new QLabel(msg, this);
    label->setStyleSheet("font-size: 14px; color: black;");
    label->move(pos);
    label->show();

    messageLabels.append(label);
}

void DialogMessenger::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == cleanupTimer) {
        //Eliminar mensajes antiguos
        if (!messageLabels.isEmpty()) {
            QLabel *label = messageLabels.takeFirst(); //toma el mas viejo
            label->deleteLater(); //borra de interfaz
        }
    }
}
