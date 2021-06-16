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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QOpenGLWidget *openGLWidget_3;
    QPushButton *Avancer_3;
    QPushButton *Gauche_3;
    QPushButton *Reculer_3;
    QPushButton *Droite_3;
    QPushButton *Stop_3;
    QProgressBar *progressBar_5;
    QLabel *label_7;
    QLCDNumber *lcdNumber_3;
    QLabel *label_8;
    QLabel *label_9;
    QProgressBar *progressBar_6;
    QPushButton *pushButton_3;
    QPushButton *deconnection;
    QMenuBar *menubar_2;
    QStatusBar *statusbar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1301, 668);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName(QString::fromUtf8("centralwidget_2"));
        centralwidget_2->setGeometry(QRect(10, 10, 1081, 740));
        openGLWidget_3 = new QOpenGLWidget(centralwidget_2);
        openGLWidget_3->setObjectName(QString::fromUtf8("openGLWidget_3"));
        openGLWidget_3->setGeometry(QRect(20, 19, 721, 611));
        Avancer_3 = new QPushButton(centralwidget_2);
        Avancer_3->setObjectName(QString::fromUtf8("Avancer_3"));
        Avancer_3->setGeometry(QRect(889, 20, 91, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Fleche-haut.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Avancer_3->setIcon(icon);
        Avancer_3->setIconSize(QSize(80, 80));
        Avancer_3->setFlat(true);
        Gauche_3 = new QPushButton(centralwidget_2);
        Gauche_3->setObjectName(QString::fromUtf8("Gauche_3"));
        Gauche_3->setGeometry(QRect(809, 100, 91, 91));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Fleche-gauche.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Gauche_3->setIcon(icon1);
        Gauche_3->setIconSize(QSize(80, 80));
        Gauche_3->setFlat(true);
        Reculer_3 = new QPushButton(centralwidget_2);
        Reculer_3->setObjectName(QString::fromUtf8("Reculer_3"));
        Reculer_3->setGeometry(QRect(890, 180, 91, 81));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Fleche-bas.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Reculer_3->setIcon(icon2);
        Reculer_3->setIconSize(QSize(80, 80));
        Reculer_3->setFlat(true);
        Droite_3 = new QPushButton(centralwidget_2);
        Droite_3->setObjectName(QString::fromUtf8("Droite_3"));
        Droite_3->setGeometry(QRect(970, 100, 91, 91));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Fleche-droite.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Droite_3->setIcon(icon3);
        Droite_3->setIconSize(QSize(80, 80));
        Droite_3->setFlat(true);
        Stop_3 = new QPushButton(centralwidget_2);
        Stop_3->setObjectName(QString::fromUtf8("Stop_3"));
        Stop_3->setGeometry(QRect(890, 100, 91, 91));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/stop.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Stop_3->setIcon(icon4);
        Stop_3->setIconSize(QSize(80, 80));
        Stop_3->setFlat(true);
        progressBar_5 = new QProgressBar(centralwidget_2);
        progressBar_5->setObjectName(QString::fromUtf8("progressBar_5"));
        progressBar_5->setGeometry(QRect(820, 360, 211, 71));
        progressBar_5->setValue(90);
        label_7 = new QLabel(centralwidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(780, 300, 251, 31));
        QFont font;
        font.setPointSize(18);
        label_7->setFont(font);
        lcdNumber_3 = new QLCDNumber(centralwidget_2);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(830, 510, 181, 61));
        label_8 = new QLabel(centralwidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(790, 460, 251, 31));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(790, 600, 251, 31));
        label_9->setFont(font);
        progressBar_6 = new QProgressBar(centralwidget_2);
        progressBar_6->setObjectName(QString::fromUtf8("progressBar_6"));
        progressBar_6->setGeometry(QRect(820, 650, 211, 71));
        progressBar_6->setValue(24);
        pushButton_3 = new QPushButton(centralwidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(760, 20, 80, 22));
        deconnection = new QPushButton(centralwidget_2);
        deconnection->setObjectName(QString::fromUtf8("deconnection"));
        deconnection->setGeometry(QRect(760, 60, 80, 22));
        menubar_2 = new QMenuBar(centralwidget);
        menubar_2->setObjectName(QString::fromUtf8("menubar_2"));
        menubar_2->setGeometry(QRect(10, 10, 1146, 21));
        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName(QString::fromUtf8("statusbar_2"));
        statusbar_2->setGeometry(QRect(10, 10, 3, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1301, 20));
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
        Avancer_3->setText(QString());
        Gauche_3->setText(QString());
        Reculer_3->setText(QString());
        Droite_3->setText(QString());
        Stop_3->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Etat Batterie :", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Vitesse :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Distance :", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "connection", nullptr));
        deconnection->setText(QCoreApplication::translate("MainWindow", "deconnection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
