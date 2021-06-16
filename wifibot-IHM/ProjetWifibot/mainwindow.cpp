#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Avancer_pressed()
{
    robot.Avant(100,100);
}


void MainWindow::on_Avancer_released()
{
    robot.Stop();
}


void MainWindow::on_Gauche_pressed()
{
    robot.Gauche(100,100);
}


void MainWindow::on_Gauche_released()
{
    robot.Stop();
}


void MainWindow::on_Reculer_pressed()
{
    robot.Arriere(100,100);
}


void MainWindow::on_Reculer_released()
{
    robot.Stop();
}


void MainWindow::on_Droite_pressed()
{
    robot.Droite(100,100);
}


void MainWindow::on_Droite_released()
{
    robot.Stop();
}


void MainWindow::on_Stop_clicked()
{
    robot.Stop();
}


void MainWindow::on_pushButton_clicked()
{
    this->robot.doConnect();
}

