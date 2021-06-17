#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QWebEngineView>


//constructueurd de la mainwindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: grey;");


    this->minot = new MyRobot(this); //instancie un robot dans la mainwindow
    //this->minot->doConnect();
    //this->minot->Stop();
    view = new QWebEngineView(parent);
    ui->gridLayout->addWidget(view);
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
    QNetworkRequest request;
    QNetworkAccessManager *manager = new QNetworkAccessManager();
  switch(event->key() ){
               case Qt :: Key_8 :
                   qDebug()<<"you pressed on 8";
                     this->minot->mouvement(150,150,80);
                          break;
               case Qt :: Key_2 :
                   qDebug()<<"you pressed on 2";
                    this->minot->mouvement(150,150,0);
                          break;
              case Qt :: Key_4 :
                   qDebug()<<"you pressed on 4";
                    this->minot->mouvement(150,150,16);
                         break;
             case Qt :: Key_6 :
                   qDebug()<<"you pressed on 6";
                   this->minot->mouvement(150,150,64);
                         break;
             case Qt :: Key_5 :
                qDebug() << "you stopp the mouvement";
                this->minot->Stop();
                         break;
            case Qt :: Key_7 :
                qDebug()<<"you pressed on 7";
                  this->minot->mouvement(100,150,80);
                         break;
            case Qt :: Key_9 :
                qDebug()<<"you pressed on 9";
                  this->minot->mouvement(150,100,80);
                         break;
            case Qt :: Key_1 :
                qDebug()<<"you pressed on 1";
                  this->minot->mouvement(100,150,00);
                         break;
            case Qt :: Key_3 :
                qDebug()<<"you pressed on 3";
                  this->minot->mouvement(150,100,00);
                         break;
             case Qt :: Key_Alt :
                 qDebug() << "vous affichez la batterie en %" ;
                 this->minot->getBatteryPercent();

                 qDebug() <<"capteur avant IR gauche " <<(unsigned char) this->minot-> DataReceived[3];
                 qDebug() <<"capteur arriere IR gauche" <<(unsigned char)this->minot->DataReceived[12];
                 qDebug() <<"capteur avant IR droit" <<(unsigned char) this->minot-> DataReceived[11];
                 qDebug() <<"capteur arriere IR droite" <<(unsigned char)this->minot->DataReceived[4];
                 qDebug() <<"la vitesse gauche est de " << (unsigned char ) this->minot-> DataReceived[1];
                 qDebug() <<"la vitesse gauche est de " << (unsigned char ) this->minot-> DataReceived[10];
                        break;
              case Qt :: Key_Z://camera vers le haut

                  request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-255"));
                  manager->get(request);
                  break;
          case Qt :: Key_D://camera vers la droite

              request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-255"));
              manager->get(request);
              break;
          case Qt :: Key_S://camera vers le bas

              request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=255"));
              manager->get(request);
              break;
          case Qt :: Key_Q://camera vers la gauche

              request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=255"));
              manager->get(request);
              break;

  }
}


//permet de gérer le relachement des touches du clavier et ainsi permettre de controler le mouvement du robot par simple pression
void MainWindow::keyReleaseEvent(QKeyEvent *event)
{

    switch(event->key() ){
        case Qt :: Key_8 :
            qDebug()<<"you stopped press on 8";
            this->minot->Stop();
            break;
        case Qt :: Key_2:
            qDebug()<<"you stopped press on 2";
            this->minot->Stop();
            break;
        case Qt :: Key_6:
            qDebug()<<"you stopped press on 6";
            this->minot->Stop();
            break;
        case Qt :: Key_4:
            qDebug()<<"you stopped press on 4";
             this->minot->Stop();
             break;
        case Qt :: Key_7 :
            qDebug()<<"you stopped press on 7";
            this->minot->Stop();
            break;
        case Qt :: Key_9:
            qDebug()<<"you stopped press on 9";
            this->minot->Stop();
            break;
        case Qt :: Key_1:
            qDebug()<<"you stopped press on 1";
            this->minot->Stop();
            break;
        case Qt :: Key_3:
            qDebug()<<"you stopped press on 3";
            this->minot->Stop();
            break;


    }
    }










//conexion au robot
void MainWindow::on_pushButton_3_clicked()
{
    this->minot->doConnect();
    minot->connected();
    qDebug() << "you are connected" ;

}
//deconnexion au robot
void MainWindow::on_deconnection_clicked()
{
    if(this->minot->doConnect2()){
        this->minot->disConnect();
       this-> minot->disconnected();
    }
    else
        qDebug() <<"you cant disconnect to the robot for the moment";
}

//les fonctions suivante permette de gerer le mouvement du robot à la souris {
void MainWindow::on_Avancer_3_clicked()
{
    qDebug() << "hey you dumbass" ;
}

void MainWindow::on_Avancer_3_pressed()
{
    this->minot->mouvement(150,150,80);
}


void MainWindow::on_Avancer_3_released()
{
    this->minot->Stop();
}

void MainWindow::on_Droite_3_pressed()
{
    this->minot->mouvement(150,150,64);
}

void MainWindow::on_Droite_3_released()
{
    this->minot->Stop();
}

void MainWindow::on_Reculer_3_pressed()
{
    this->minot->mouvement(150,150,00);
}

void MainWindow::on_Reculer_3_released()
{
    this->minot->Stop();
}

void MainWindow::on_Gauche_3_pressed()
{
    this->minot->mouvement(150,150,16);
}

void MainWindow::on_Gauche_3_released()
{
    this->minot->Stop();
}

void MainWindow::on_Droite_5_pressed()//deplacement robot avant-gauche
{
    this->minot->mouvement(100,150,80);
}

void MainWindow::on_Droite_5_released()
{
    this->minot->Stop();
}

void MainWindow::on_Droite_4_pressed()//deplacement robot avant-droite
{
    this->minot->mouvement(150,100,80);
}


void MainWindow::on_Droite_4_released()
{
    this->minot->Stop();
}

void MainWindow::on_Droite_6_pressed() //deplacement arriere-gauche
{
    this->minot->mouvement(100,150,00);
}

void MainWindow::on_Droite_6_released()
{
    this->minot->Stop();
}

void MainWindow::on_Droite_7_pressed() //deplacement arriere_droite
{
    this->minot->mouvement(150,100,00);

}

void MainWindow::on_Droite_7_released()
{
    this->minot->Stop();
}

// }


//move la camera vers le haut
void MainWindow::on_pushButton_clicked()
{
    QNetworkRequest request;
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-255"));
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(request);

}




//move la camera vers la droite
void MainWindow::on_pushButton_4_clicked()
{
    QNetworkRequest request;
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-255"));
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(request);
}

//mouv la caméra vers le bas
void MainWindow::on_pushButton_5_clicked()
{
    QNetworkRequest request;
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=255"));
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(request);
}

//mouv la camera vers la gauche
void MainWindow::on_pushButton_2_clicked()
{
    QNetworkRequest request;
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=255"));
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(request);
}


void MainWindow::on_pushButton_6_clicked()
{
    view->load(QUrl("http://192.168.1.106:8080/?action=stream"));
    view->show();
}






void MainWindow::on_information_clicked()
{
    ui->Batterie->display((int)(this->minot->getBatteryPercent()));
    ui->IRAG->display((int) (unsigned char) this->minot-> DataReceived[3]);
    ui->IRARG->display((int) (unsigned char) this->minot-> DataReceived[4]);
    ui->IRAD->display((int) (unsigned char) this->minot-> DataReceived[11]);
    ui->IRArD->display((int) (unsigned char) this->minot-> DataReceived[12]);
}

