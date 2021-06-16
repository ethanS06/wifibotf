#include "mainwindow.h"
#include "ui_mainwindow.h"


//constructueurd de la mainwindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->minot = new MyRobot(this); //instancie un robot dans la mainwindow
    this->minot->doConnect();
    this->minot->Stop();

    //connect signal
    connect(minot, SIGNAL(updateUI(QByteArray)), this, SLOT(update_Robot_Information()));


}
MainWindow::~MainWindow()
{
    delete ui;
}

/*permet de gérer les entrées clavier pour effectuer des actions sur le robot
 * a chaque touche pressez on effectue la suite d'instruction qui se trouve dans le case specifié
*/
void MainWindow::keyPressEvent(QKeyEvent *event)
{
  switch(event->key() ){
               case Qt :: Key_Z :
                   qDebug()<<"you pressed on Z";
                     this->minot->mouvement(150,150,80);
                          break;
               case Qt :: Key_S :
                   qDebug()<<"you pressed on S";
                    this->minot->mouvement(150,150,0);
                          break;
              case Qt :: Key_Q :
                   qDebug()<<"you pressed on D";
                    this->minot->mouvement(150,150,16);
               break;
             case Qt :: Key_D :
                   qDebug()<<"you pressed on Q";
                   this->minot->mouvement(150,150,64);
                   break;
             case Qt :: Key_L :
                qDebug() << "you stopp the mouvement";
                this->minot->Stop();
             case Qt :: Key_B :
                 qDebug() << "vous affichez la batterie" ;
                  this->minot->getBatteryPercent();
                 //qDebug()<< this->minot->DataReceived[1];
                 qDebug() <<"capteur avant IR (gauche ou droite" <<(unsigned char) this->minot-> DataReceived[3];
                 qDebug() <<"capteur avant IR (gauche ou droite" <<(unsigned char)this->minot->DataReceived[4];
                 qDebug() <<"capteur arriere IR (gauche ou droite" <<(unsigned char) this->minot-> DataReceived[11];
                 qDebug() <<"capteur arriere IR (gauche ou droite" <<(unsigned char)this->minot->DataReceived[12];
                 qDebug() <<"la vitesse gauche est de " << (unsigned char ) this->minot-> DataReceived[1];
                 qDebug() <<"la vitesse gauche est de " << (unsigned char ) this->minot-> DataReceived[10];


  }
}


//permet de gérer le relachement des touches du clavier et ainsi permettre de controler le mouvement du robot par simple pression
void MainWindow::keyReleaseEvent(QKeyEvent *event)
{

    switch(event->key() ){
        case Qt :: Key_Z :
            qDebug()<<"you stopped press on Z";
            this->minot->Stop();
            break;
        case Qt :: Key_S:
            qDebug()<<"you stopped press on S";
            this->minot->Stop();
            break;
        case Qt :: Key_D:
            qDebug()<<"you stopped press on D";
            this->minot->Stop();
            break;
        case Qt :: Key_Q:
          qDebug()<<"you stopped press on Q";
          this->minot->Stop();
          break;

    }
    }







void MainWindow::on_Avancer_pressed()
{
    minot->Avant(100,100);
}


void MainWindow::on_Avancer_released()
{
    minot->Stop();
}


void MainWindow::on_Gauche_pressed()
{
    minot->Gauche(100,100);
}


void MainWindow::on_Gauche_released()
{
    minot->Stop();
}


void MainWindow::on_Reculer_pressed()
{
    minot->Arriere(100,100);
}


void MainWindow::on_Reculer_released()
{
    minot->Stop();
}


void MainWindow::on_Droite_pressed()
{
    minot->Droite(100,100);
}


void MainWindow::on_Droite_released()
{
    minot->Stop();
}


void MainWindow::on_Stop_clicked()
{
    minot->Stop();
}


void MainWindow::on_pushButton_clicked()
{
        this->minot->doConnect();
        minot->connected();
        qDebug() << "you are connected" ;
}



void MainWindow::on_deconnection_clicked()
{
    if(this->minot->doConnect2()){
        this->minot->disConnect();
       this-> minot->disconnected();
    }
    else
        qDebug() <<"you cant disconnect to the robot for the moment";
}


void MainWindow::on_Avancer_3_clicked()
{
    qDebug() << "hey you dumbass" ;
}



