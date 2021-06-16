#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

    void on_Avancer_pressed();

    void on_Avancer_released();

    void on_Gauche_pressed();

    void on_Gauche_released();

    void on_Reculer_pressed();

    void on_Reculer_released();

    void on_Droite_pressed();

    void on_Droite_released();

    void on_Stop_clicked();

    void on_pushButton_clicked();

    void keyPressEvent (QKeyEvent *event); //permet de gérer la pression de touche clavier
    void keyReleaseEvent (QKeyEvent *event); //permet de gérer le relachement d'une touche clavier

    void on_deconnection_clicked();

    void on_Avancer_3_clicked();



private:
    Ui::MainWindow *ui;
    MyRobot *minot; //permet de gérer les wifibots à l'aide de la fenêtre principale
};
#endif // MAINWINDOW_H
