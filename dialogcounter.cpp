#include "dialogcounter.h"
#include "ui_dialogcounter.h"

DialogCounter::DialogCounter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogCounter)
    , c1(new Counter(1, 100))
    , c2(new Counter(100, 200))
    , c3(new Counter(300, 300))
    , c4(new Counter(500, 400))
    , c5(new Counter(1000, 500))

    //se definen los valores iniciales de cada contandor
    , sequenceVaLue1(1)
    , sequenceVaLue2(100)
    , sequenceVaLue3(300)
    , sequenceVaLue4(500)
    , sequenceVaLue5(1000)

{
    ui->setupUi(this);
    //cargamos loa valores iniciales en la interfaz

    ui->txtInit->setText(QString::number(sequenceVaLue1));

    //cargamos los incrementos
    ui->txtIncrement->setText(QString::number(c1->getSequence()));

    //cargamos los delay
    ui->txtDelay->setText(QString::number(c1->getDelay()));

    //conectamos las sennales
    connect(c1, SIGNAL(signalCounter(int)), this, SLOT(setSequence1(int)));
    /*connect(c2, SIGNAL(signalCounter(int)), this, SLOT(setSequence2(int)));
    connect(c3, SIGNAL(signalCounter(int)), this, SLOT(setSequence3(int)));
    connect(c4, SIGNAL(signalCounter(int)), this, SLOT(setSequence4(int)));
    connect(c5, SIGNAL(signalCounter(int)), this, SLOT(setSequence5(int)));*/

}

DialogCounter::~DialogCounter()
{
    delete ui;
}

void DialogCounter::setSequence1(int value){
    ui->textBrowser->setPlainText(ui->textBrowser->toPlainText() + QString::number(sequenceVaLue1+=value));
    ui->currentValue1->setText(QString::number(sequenceVaLue1));
}

void DialogCounter::on_btnStart_clicked()
{
    c1->restart(); //agregar el resto

    //PARA BOTON DE STOP
    /*if(c1->isRunning()){
        ui->btnStop->setText("Start");

    }else{
        ui->btnStop->setText("Stop");
    }*/
}

