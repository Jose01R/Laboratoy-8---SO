#include "dialogmutex.h"
#include "ui_dialogmutex.h"

DialogMutex::DialogMutex(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogMutex)
    , m1(new Mutex())
    , m2(new Mutex())
    , m3(new Mutex())
    , m4(new Mutex())
    , m5(new Mutex())

    , mutexChar1("*")
    , mutexChar2("$")
    , mutexChar3("#")
    , mutexChar4("%")
    , mutexChar5("&")
{
    ui->setupUi(this);

    //agregamos las sennales que conectan y envian eventos a traves de slots
    connect(m1, SIGNAL(signalMutex(QString)), this, SLOT(actionMutexChar1()));
    connect(m2, SIGNAL(signalMutex(QString)), this, SLOT(actionMutexChar2()));
    connect(m3, SIGNAL(signalMutex(QString)), this, SLOT(actionMutexChar3()));
    connect(m4, SIGNAL(signalMutex(QString)), this, SLOT(actionMutexChar4()));
    connect(m5, SIGNAL(signalMutex(QString)), this, SLOT(actionMutexChar5()));
}

DialogMutex::~DialogMutex()
{
    delete m1, delete m2, delete m3, delete m4, delete m5;
    delete ui;
}

void DialogMutex::actionMutexChar1(){
    //this->ui->textBrowser->append(this->mutexChar1);
    this->ui->textBrowser->setPlainText(this->ui->textBrowser->toPlainText() + mutexChar1);
}

void DialogMutex::actionMutexChar2(){
    //this->ui->textBrowser->append(this->mutexChar2);
    this->ui->textBrowser->setPlainText(this->ui->textBrowser->toPlainText() + mutexChar2);
}

void DialogMutex::actionMutexChar3(){
    //this->ui->textBrowser->append(this->mutexChar3);
    this->ui->textBrowser->setPlainText(this->ui->textBrowser->toPlainText() + mutexChar3);
}

void DialogMutex::actionMutexChar4(){
    //this->ui->textBrowser->append(this->mutexChar4);
    this->ui->textBrowser->setPlainText(this->ui->textBrowser->toPlainText() + mutexChar4);
}

void DialogMutex::actionMutexChar5(){
    //this->ui->textBrowser->append(this->mutexChar5);
    this->ui->textBrowser->setPlainText(this->ui->textBrowser->toPlainText() + mutexChar5);
}

void DialogMutex::on_btnStart_clicked()
{
    this->ui->textBrowser->clear();
    m1->restart();
    m2->restart();
    m3->restart();
    m4->restart();
    m5->restart();
}


void DialogMutex::on_btnClear_clicked()
{
    this->ui->textBrowser->clear();
}

