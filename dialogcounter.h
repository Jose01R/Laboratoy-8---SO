#ifndef DIALOGCOUNTER_H
#define DIALOGCOUNTER_H

#include <QDialog>
#include "counter.h"

namespace Ui {
class DialogCounter;
}

class DialogCounter : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCounter(QWidget *parent = nullptr);
    ~DialogCounter();

private slots:
    void setSequence1(int);
    /*void setSequence2(int);
    void setSequence3(int);
    void setSequence4(int);
    void setSequence5(int);*/

    void on_btnStart_clicked();

private:
    Ui::DialogCounter *ui;
    Counter *c1, *c2, *c3, *c4, *c5;
    int sequenceVaLue1, sequenceVaLue2, sequenceVaLue3, sequenceVaLue4, sequenceVaLue5;
};

#endif // DIALOGCOUNTER_H
