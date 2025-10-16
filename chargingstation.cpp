#include "chargingstation.h"
#include <QRandomGenerator>
#include <QTimer>

ChargingStation::ChargingStation(int totalChargers, QObject *parent)
    : QObject{parent}, totalChargers(totalChargers)
{
    sem = new QSemaphore(totalChargers);
    chargers.fill(false, totalChargers);
}

ChargingStation::~ChargingStation(){
    delete sem;
    for (auto *t : threads)
        t->quit();
}

void ChargingStation::startSimulation(int totalCars){
    emit logMessage(QString("Starting simulation with %1 cars").arg(totalCars));

    for(int i=0; i<totalCars; i++){
        QThread *t = QThread::create([=]() {carThread(i+1);});
        threads.append(t);
        t->start();
    }
}

void ChargingStation::carThread(int id){
    emit logMessage(QString("Car %1 waiting charger...").arg(id));

    sem->acquire(); //espera cargador libre - entra en region libre
    int chargerIndex = -1;
    for(int i=0; i<chargers.size(); i++){
        if(!chargers[i]){
            chargers[i] = true;
            chargerIndex = i;
            break;
        }
    }

    emit chargerStatusChanged(chargers);
    emit logMessage(QString("Car %1 occupied charger %2").arg(id).arg(chargerIndex+1));

    //simular tiempo de carga
    QThread::sleep(QRandomGenerator::global()->bounded(2, 5));

    //liberar el cargador
    chargers[chargerIndex] = false;
    sem->release(); //libera semaforo - sale region critica
    emit chargerStatusChanged(chargers);
    emit logMessage(QString("Car %1 finished and release charger %2").arg(id).arg(chargerIndex+1));
}






