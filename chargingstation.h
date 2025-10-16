#ifndef CHARGINGSTATION_H
#define CHARGINGSTATION_H

#include <QThread>
#include <QSemaphore>
#include <QThread>
#include <QVector>

class ChargingStation : public QObject
{
    Q_OBJECT
public:
    explicit ChargingStation(int totalChargers, QObject *parent = nullptr);
    ~ChargingStation();

    void startSimulation(int totalCars);
    QVector<bool> getChargerStatus() const;

private:
    int totalChargers;
    QSemaphore *sem;
    QVector<bool> chargers;
    QList<QThread*> threads;

    void carThread(int id);

signals:
    void chargerStatusChanged(const QVector<bool> &status);
    void logMessage(const QString &msg);
};

#endif // CHARGINGSTATION_H
