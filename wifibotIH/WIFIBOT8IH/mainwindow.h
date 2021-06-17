#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include "myrobot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



   // void on_pushButton_clicked();

    void keyPressEvent (QKeyEvent *event); //permet de gérer la pression de touche clavier
    void keyReleaseEvent (QKeyEvent *event); //permet de gérer le relachement d'une touche clavier
    void on_pushButton_3_clicked(); //connexion au robot
    void on_deconnection_clicked(); //deconnexion au robot

    void on_Avancer_3_clicked(); //simple test


// les fonctions suivantes peremettent de gerer le mouvement du robot à la souris {

    void on_Droite_4_pressed(); //le robot va en avant-droite

    void on_Droite_4_released(); //le robot cesse d'aller en avant-droite

    void on_Droite_5_pressed(); //le robot va en avant-gauche

    void on_Droite_5_released(); //le robot cesse d'aller en avant gauche

    void on_Droite_6_pressed(); //le robot va en arriere-gauche

    void on_Droite_6_released(); //le robot cesse d'aller en arriere gauche

    void on_Droite_7_pressed(); //le robot va en arriere droite

    void on_Droite_7_released(); //le robot cesse d'aller en arriere gauche

    void on_Avancer_3_pressed(); //le robot avance

    void on_Avancer_3_released(); //le robot cesse d'avancer

    void on_Droite_3_pressed(); //le robot avance a droite

    void on_Droite_3_released(); //le robot cesse d'aller a droite

    void on_Reculer_3_pressed(); //le robot va en arriere

    void on_Reculer_3_released(); //le robot cesse d'aller en arriere

    void on_Gauche_3_pressed(); //le robot va a gauche

    void on_Gauche_3_released(); // le robot cesse d'aller à gauche
// }



    //les fonctions suivantes permette de gerer la camera à la souris {
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();
//}


    void on_information_clicked();

private:
    QWebEngineView *view;
    Ui::MainWindow *ui;
    MyRobot *minot; //permet de gérer les wifibots à l'aide de la fenêtre principale
};
#endif // MAINWINDOW_H
