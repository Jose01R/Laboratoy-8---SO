#ifndef DIALOGMUTEX_H
#define DIALOGMUTEX_H

#include <QDialog>
#include "mutex.h"

namespace Ui {
class DialogMutex;
}

class DialogMutex : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMutex(QWidget *parent = nullptr);
    ~DialogMutex();


private slots:
    void actionMutexChar1();
    void actionMutexChar2();
    void actionMutexChar3();
    void actionMutexChar4();
    void actionMutexChar5();

    void on_btnStart_clicked();

    void on_btnClear_clicked();

private:
    Ui::DialogMutex *ui;

    //VARIABLES QUE REPRESENTAN INSTANCIAS DE LA CLASE MUTEX
    Mutex *m1, *m2, *m3, *m4, *m5;

    //VARIABLES QUE REPRESENTAN SECUENCIAS
    QString mutexChar1, mutexChar2, mutexChar3, mutexChar4, mutexChar5;


};

#endif // DIALOGMUTEX_H
