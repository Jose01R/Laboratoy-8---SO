#ifndef DIALOGCHARGINGSTATION_H
#define DIALOGCHARGINGSTATION_H

#include <QDialog>
#include <QLabel>
#include "chargingstation.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DialogChargingStation; }
QT_END_NAMESPACE

class DialogChargingStation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChargingStation(QWidget *parent = nullptr);
    ~DialogChargingStation();

private slots:
    void onStartClicked();
    void onCloseClicked();
    void updateChargerStatus(const QVector<bool> &status);
    void appendLogMessage(const QString &msg);

private:
    Ui::DialogChargingStation *ui;
    ChargingStation *station;
    QVector<QLabel*> chargerLabels;  //labels para estaciones de carga
    int totalChargers;
    int totalCars;                   //total carros (hilos)
};

#endif // DIALOGCHARGINGSTATION_H
