#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogmutex.h"
#include "dialogcounter.h"
#include "dialogprodcons.h"
#include "dialogmessenger.h"
#include "dialogchargingstation.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ptnMutex_clicked()
{
    DialogMutex *dm = new DialogMutex();
    dm->setWindowTitle("Mutex (critical region)");
    dm->show();
}


void MainWindow::on_ptn_Counter_clicked()
{
    DialogCounter *dc = new DialogCounter();
    dc->setWindowTitle("Counters");
    dc->show();
}


void MainWindow::on_ptnProdCons_clicked()
{
    DialogProdCons *dpc = new DialogProdCons();
    dpc->setWindowTitle("Producer-Consumer Problem");
    dpc->show();
}


void MainWindow::on_ptnMessg_clicked()
{
    DialogMessenger *dmg = new DialogMessenger();
    dmg->setWindowTitle("Messengers with timers");
    dmg->show();
}


void MainWindow::on_ptnCharSt_clicked()
{
    DialogChargingStation *dcs = new DialogChargingStation();
    dcs->setWindowTitle("Charging Station");
    dcs->show();
}

