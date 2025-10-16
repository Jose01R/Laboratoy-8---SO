#ifndef MESSENGER_H
#define MESSENGER_H

#include <QThread>
#include <QString>
#include <QPoint>

class Messenger : public QThread
{
    Q_OBJECT

public:
    explicit Messenger(const QString &msg, QObject *parent = nullptr);

signals:
    void messageReady(const QString &msg, const QPoint &pos);

protected:
    void run() override;

private:
    QString message;
};

#endif // MESSENGER_H
