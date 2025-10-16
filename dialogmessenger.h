#ifndef DIALOGMESSENGER_H
#define DIALOGMESSENGER_H

#include <QDialog>
#include <QLabel>
#include <QTimerEvent>
#include "messenger.h"

namespace Ui {
class DialogMessenger;
}

class DialogMessenger : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMessenger(QWidget *parent = nullptr);
    ~DialogMessenger();

protected:
    void timerEvent(QTimerEvent *event) override;

private slots:
    void showMessage(const QString &msg, const QPoint &pos);

private:
    Ui::DialogMessenger *ui;
    QList<QLabel*> messageLabels;
    Messenger *threads[5];
    int cleanupTimer;
};

#endif // DIALOGMESSENGER_H
