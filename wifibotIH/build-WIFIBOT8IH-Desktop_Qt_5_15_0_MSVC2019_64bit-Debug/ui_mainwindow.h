/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QPushButton *Avancer_3;
    QPushButton *Gauche_3;
    QPushButton *Reculer_3;
    QPushButton *Droite_3;
    QPushButton *Stop_3;
    QPushButton *pushButton_3;
    QPushButton *deconnection;
    QPushButton *Droite_4;
    QPushButton *Droite_5;
    QPushButton *Droite_6;
    QPushButton *Droite_7;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *Batterie;
    QLabel *label_3;
    QLCDNumber *IRAD;
    QLCDNumber *IRARG;
    QLCDNumber *IRArD;
    QLCDNumber *IRAG;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *information;
    QMenuBar *menubar_2;
    QStatusBar *statusbar_2;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1820, 1265);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName(QString::fromUtf8("centralwidget_2"));
        centralwidget_2->setGeometry(QRect(10, 40, 1181, 1071));
        Avancer_3 = new QPushButton(centralwidget_2);
        Avancer_3->setObjectName(QString::fromUtf8("Avancer_3"));
        Avancer_3->setGeometry(QRect(970, 110, 91, 91));
        Avancer_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Avancer_3->setIconSize(QSize(80, 80));
        Avancer_3->setFlat(true);
        Gauche_3 = new QPushButton(centralwidget_2);
        Gauche_3->setObjectName(QString::fromUtf8("Gauche_3"));
        Gauche_3->setGeometry(QRect(890, 190, 91, 91));
        Gauche_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Gauche_3->setIconSize(QSize(80, 80));
        Gauche_3->setFlat(true);
        Reculer_3 = new QPushButton(centralwidget_2);
        Reculer_3->setObjectName(QString::fromUtf8("Reculer_3"));
        Reculer_3->setGeometry(QRect(971, 270, 91, 81));
        Reculer_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Reculer_3->setIconSize(QSize(80, 80));
        Reculer_3->setFlat(true);
        Droite_3 = new QPushButton(centralwidget_2);
        Droite_3->setObjectName(QString::fromUtf8("Droite_3"));
        Droite_3->setGeometry(QRect(1051, 190, 91, 91));
        Droite_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Droite_3->setIconSize(QSize(80, 80));
        Droite_3->setFlat(true);
        Stop_3 = new QPushButton(centralwidget_2);
        Stop_3->setObjectName(QString::fromUtf8("Stop_3"));
        Stop_3->setGeometry(QRect(971, 190, 91, 91));
        Stop_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Stop_3->setIconSize(QSize(80, 80));
        Stop_3->setFlat(true);
        pushButton_3 = new QPushButton(centralwidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(880, 30, 80, 22));
        deconnection = new QPushButton(centralwidget_2);
        deconnection->setObjectName(QString::fromUtf8("deconnection"));
        deconnection->setGeometry(QRect(990, 30, 80, 22));
        Droite_4 = new QPushButton(centralwidget_2);
        Droite_4->setObjectName(QString::fromUtf8("Droite_4"));
        Droite_4->setGeometry(QRect(1070, 120, 91, 81));
        Droite_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        Droite_4->setIconSize(QSize(80, 80));
        Droite_4->setFlat(true);
        Droite_5 = new QPushButton(centralwidget_2);
        Droite_5->setObjectName(QString::fromUtf8("Droite_5"));
        Droite_5->setGeometry(QRect(870, 120, 91, 81));
        Droite_5->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Droite_5->setIconSize(QSize(80, 80));
        Droite_5->setFlat(true);
        Droite_6 = new QPushButton(centralwidget_2);
        Droite_6->setObjectName(QString::fromUtf8("Droite_6"));
        Droite_6->setGeometry(QRect(880, 270, 91, 81));
        Droite_6->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Droite_6->setIconSize(QSize(80, 80));
        Droite_6->setFlat(true);
        Droite_7 = new QPushButton(centralwidget_2);
        Droite_7->setObjectName(QString::fromUtf8("Droite_7"));
        Droite_7->setGeometry(QRect(1060, 270, 91, 81));
        Droite_7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        Droite_7->setIconSize(QSize(80, 80));
        Droite_7->setFlat(true);
        gridLayoutWidget = new QWidget(centralwidget_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 50, 611, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(centralwidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 150, 81, 51));
        pushButton_2 = new QPushButton(centralwidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 200, 81, 51));
        pushButton_4 = new QPushButton(centralwidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 200, 81, 51));
        pushButton_5 = new QPushButton(centralwidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 250, 81, 51));
        pushButton_6 = new QPushButton(centralwidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1100, 30, 80, 21));
        label = new QLabel(centralwidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(930, 100, 151, 31));
        label_2 = new QLabel(centralwidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(46, 82, 161, 61));
        Batterie = new QLCDNumber(centralwidget_2);
        Batterie->setObjectName(QString::fromUtf8("Batterie"));
        Batterie->setGeometry(QRect(250, 600, 101, 41));
        label_3 = new QLabel(centralwidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 540, 181, 21));
        IRAD = new QLCDNumber(centralwidget_2);
        IRAD->setObjectName(QString::fromUtf8("IRAD"));
        IRAD->setGeometry(QRect(470, 680, 101, 41));
        IRARG = new QLCDNumber(centralwidget_2);
        IRARG->setObjectName(QString::fromUtf8("IRARG"));
        IRARG->setGeometry(QRect(310, 740, 101, 41));
        IRArD = new QLCDNumber(centralwidget_2);
        IRArD->setObjectName(QString::fromUtf8("IRArD"));
        IRArD->setGeometry(QRect(470, 740, 101, 41));
        IRAG = new QLCDNumber(centralwidget_2);
        IRAG->setObjectName(QString::fromUtf8("IRAG"));
        IRAG->setGeometry(QRect(310, 680, 101, 41));
        label_4 = new QLabel(centralwidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 600, 51, 31));
        label_5 = new QLabel(centralwidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 690, 101, 31));
        label_6 = new QLabel(centralwidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 750, 121, 31));
        label_9 = new QLabel(centralwidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(630, 700, 121, 31));
        label_8 = new QLabel(centralwidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(630, 740, 121, 31));
        information = new QPushButton(centralwidget_2);
        information->setObjectName(QString::fromUtf8("information"));
        information->setGeometry(QRect(430, 540, 80, 21));
        menubar_2 = new QMenuBar(centralwidget);
        menubar_2->setObjectName(QString::fromUtf8("menubar_2"));
        menubar_2->setGeometry(QRect(10, 10, 1146, 21));
        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName(QString::fromUtf8("statusbar_2"));
        statusbar_2->setGeometry(QRect(10, 10, 3, 22));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1000, 1090, 121, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1820, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Avancer_3->setText(QCoreApplication::translate("MainWindow", "Avant", nullptr));
        Gauche_3->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
        Reculer_3->setText(QCoreApplication::translate("MainWindow", "Arriere", nullptr));
        Droite_3->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
        Stop_3->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "connection", nullptr));
        deconnection->setText(QCoreApplication::translate("MainWindow", "deconnection", nullptr));
        Droite_4->setText(QCoreApplication::translate("MainWindow", "Avant Droite", nullptr));
        Droite_5->setText(QCoreApplication::translate("MainWindow", "Avant Gauche", nullptr));
        Droite_6->setText(QCoreApplication::translate("MainWindow", "Arriere Gauche", nullptr));
        Droite_7->setText(QCoreApplication::translate("MainWindow", "Arriere-Droite", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Haut", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Bas", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Camera:ON", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mouvement du Robot:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mouvement de la camera", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Informations(click le bouton suivant)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Batterie", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Capteur IR AG", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Capteur IR ArG", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Capteur IR AD", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Capteur IR ArD", nullptr));
        information->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Capteur IR ArG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
