#include "dialogchargingstation.h"
#include "ui_dialogchargingstation.h"
#include <QPushButton>
#include <QTextBrowser>

DialogChargingStation::DialogChargingStation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogChargingStation)
    , totalChargers(5)   //Num de cargadores
    , totalCars(20)      //Num de carros
{
    ui->setupUi(this);

    //CREAMOS LEDS DINAMICOS (LABELS) - PARA CONTROLAR OCUPADO O VACIO

    //ubicacion
    int xStart = 230;
    int yStart = 530;

    //espaciado entre labels
    int spacing = 50;

    //se crean cantidad de labels - cargadores
    for(int i=0; i<totalChargers; i++){
        QLabel *lbl = new QLabel(this);
        lbl->setFixedSize(40,40);
        lbl->setAlignment(Qt::AlignCenter); // centrar el texto
        lbl->setText(QString("C%1").arg(i+1)); //texto
        lbl->setStyleSheet("background-color: green; border-radius: 20px; color: white; font-weight: bold;");
        lbl->move(xStart + i*spacing, yStart);
        lbl->show();


        chargerLabels.append(lbl);
    }

    //crear estacion de carga
    station = new ChargingStation(totalChargers, this);

    //conectamos señales
    connect(station, &ChargingStation::chargerStatusChanged, this, &DialogChargingStation::updateChargerStatus);
    connect(station, &ChargingStation::logMessage, this, &DialogChargingStation::appendLogMessage);

    //conectamos botones
    connect(ui->btnStart, &QPushButton::clicked, this, &DialogChargingStation::onStartClicked);
    connect(ui->btnClose, &QPushButton::clicked, this, &DialogChargingStation::onCloseClicked);
}

DialogChargingStation::~DialogChargingStation()
{
    delete ui;
}

void DialogChargingStation::onStartClicked()
{
    //inicia la simulaciin con valor fijo de carros
    station->startSimulation(totalCars);
}

void DialogChargingStation::onCloseClicked()
{
    this->close();
}

void DialogChargingStation::updateChargerStatus(const QVector<bool> &status)
{
    for(int i = 0; i < chargerLabels.size() && i < status.size(); i++){
        if(status[i])
            chargerLabels[i]->setStyleSheet("background-color: red; border-radius: 15px;");  //ocupado
        else
            chargerLabels[i]->setStyleSheet("background-color: green; border-radius: 15px;"); //libre
    }
}

void DialogChargingStation::appendLogMessage(const QString &msg)
{
    ui->textBrowser->append(msg);
}
