/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QOpenGLWidget *openGLWidget;
    QPushButton *Avancer;
    QPushButton *Gauche;
    QPushButton *Reculer;
    QPushButton *Droite;
    QPushButton *Stop;
    QProgressBar *progressBar;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLabel *label_3;
    QProgressBar *progressBar_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1146, 787);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(20, 19, 721, 611));
        Avancer = new QPushButton(centralwidget);
        Avancer->setObjectName(QString::fromUtf8("Avancer"));
        Avancer->setGeometry(QRect(889, 20, 91, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Fleche-haut.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Avancer->setIcon(icon);
        Avancer->setIconSize(QSize(80, 80));
        Avancer->setFlat(true);
        Gauche = new QPushButton(centralwidget);
        Gauche->setObjectName(QString::fromUtf8("Gauche"));
        Gauche->setGeometry(QRect(809, 100, 91, 91));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Fleche-gauche.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Gauche->setIcon(icon1);
        Gauche->setIconSize(QSize(80, 80));
        Gauche->setFlat(true);
        Reculer = new QPushButton(centralwidget);
        Reculer->setObjectName(QString::fromUtf8("Reculer"));
        Reculer->setGeometry(QRect(890, 180, 91, 81));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Fleche-bas.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Reculer->setIcon(icon2);
        Reculer->setIconSize(QSize(80, 80));
        Reculer->setFlat(true);
        Droite = new QPushButton(centralwidget);
        Droite->setObjectName(QString::fromUtf8("Droite"));
        Droite->setGeometry(QRect(970, 100, 91, 91));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Fleche-droite.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Droite->setIcon(icon3);
        Droite->setIconSize(QSize(80, 80));
        Droite->setFlat(true);
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(890, 100, 91, 91));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/stop.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Stop->setIcon(icon4);
        Stop->setIconSize(QSize(80, 80));
        Stop->setFlat(true);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(820, 360, 211, 71));
        progressBar->setValue(90);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(780, 300, 251, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(830, 510, 181, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(790, 460, 251, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(790, 600, 251, 31));
        label_3->setFont(font);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(820, 650, 211, 71));
        progressBar_2->setValue(24);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(760, 20, 80, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1146, 21));
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
        Avancer->setText(QString());
        Gauche->setText(QString());
        Reculer->setText(QString());
        Droite->setText(QString());
        Stop->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Etat Batterie :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vitesse :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Distance :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "connection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
