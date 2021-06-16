#ifndef MYROBOT_H
#define MYROBOT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTimer>
#include <QMutex>
#include <windows.h>



class MyRobot : public QObject {
    Q_OBJECT
public:
    explicit MyRobot(QObject *parent = 0);
    void doConnect();
    void disConnect();
    QByteArray DataToSend;
    QByteArray DataReceived;
    QMutex Mutex;


signals:
    void updateUI(const QByteArray Data);
public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void MyTimerSlot();

    void Avant(short speed1, short speed2);
    void Arriere(short speed1, short speed2);
    void Gauche(short speed1, short speed2);
    void Droite(short speed1, short speed2);
    void mouvement (short speed1, short speed2, short direction);

    void Stop();
    short Crc16(unsigned char *_Adresse_tab, unsigned char Taille_Max);

private:
    QTcpSocket *socket;
    QTimer *TimerEnvoi;
};

#endif // MYROBOT_H
