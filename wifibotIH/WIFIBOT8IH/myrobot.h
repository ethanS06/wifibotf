#ifndef MYROBOT_H
#define MYROBOT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>
#include <QTimer>
#include <QMutex>
#include <QKeyEvent>



class MyRobot : public QObject {
    Q_OBJECT
public:
    explicit MyRobot(QObject *parent = 0);
    void doConnect(); //permet de connecter un ordinateur au robot
    bool doConnect2(); //permet de connecter un ordinateur au robot et de retourner un booléen pour pouvoir verifier si l'on est connecté
    void disConnect();//permet de se déconnecter du robot
    QByteArray DataToSend; //vecteur de donnée correspondant aux données que l'on envoie au robot
    QByteArray DataReceived; //vecteur de donnée correspondant aux données que l'on recois du robot
    QMutex Mutex;
    QTcpSocket* getSocket();


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

    float getBatteryPercent(); //permet d'obtenir le pourcentage de batterie du robot
    float getBatteryLevel();

    int getSpeddL();
    int getSpeedR();


private:
    QTcpSocket *socket;
    QTimer *TimerEnvoi;
    float batteryLevel;
    unsigned char  IRAVG;
    unsigned char IRAVD;
    unsigned char IRBWG;
    unsigned char IRBWD;
    int speedL;
    int speedR;
};

#endif // MYROBOT_H
