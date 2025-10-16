#include "dialogprodcons.h"
#include "ui_dialogprodcons.h"

DialogProdCons::DialogProdCons(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::DialogProdCons),
    buffer(new Buffer(5)) //capacidad del buffer
{
    ui->setupUi(this);

    //creamos instancias de productor y consumidor
    producer = new Producer(buffer, ui->textBrowser);
    consumer = new Consumer(buffer, ui->textBrowser);

    //Mostrar mensaje
    ui->textBrowser->append("Presione 'Start' para iniciar.");
}

DialogProdCons::~DialogProdCons()
{
    //detener hilos si siguen activos
    if (producer->isRunning()) producer->active = false;
    if (consumer->isRunning()) consumer->active = false;

    producer->wait();
    consumer->wait();

    delete producer;
    delete consumer;
    delete buffer;
    delete ui;
}

void DialogProdCons::on_btnStart_clicked()
{
    ui->textBrowser->append(">> Starting threads...");

    if (!producer->isRunning()) {
        producer->active = true;
        producer->start();
        ui->textBrowser->append("Producer: produce");
    }

    if (!consumer->isRunning()) {
        consumer->active = true;
        consumer->start();
        ui->textBrowser->append("Consumer: consume");
    }
}

void DialogProdCons::on_btnStop_clicked()
{
    producer->active = false;
    consumer->active = false;

    ui->textBrowser->append("Producer - Consumer stopped");
}
