#ifndef DIALOGPRODCONS_H
#define DIALOGPRODCONS_H

#include <QDialog>
#include "buffer.h"
#include "producer.h"
#include "consumer.h"

namespace Ui {
class DialogProdCons;
}

class DialogProdCons : public QDialog
{
    Q_OBJECT

public:
    explicit DialogProdCons(QWidget *parent = nullptr);
    ~DialogProdCons();

private slots:
    void on_btnStart_clicked();
    void on_btnStop_clicked();

private:
    Ui::DialogProdCons *ui;
    Buffer *buffer;
    Producer *producer;
    Consumer *consumer;
};

#endif // DIALOGPRODCONS_H
