#include "mainwindow.h"
#include "myrobot.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "myrobot_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

   // MyRobot robot(0);
    //robot.doConnect();

   // minot.mouvement(120,120,16);
    //Sleep(5000);
   // minot.mouvement(120,120,80);
    //robot.Avant(80,80);
   // minot.Arriere(100,100);
    //minot.Gauche(100,100);
    //minot.Droite(100,100);
    //minot.Stop();
    MainWindow w;
    w.show();
    return a.exec();
}
