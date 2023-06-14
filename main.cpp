#include <QApplication>
#include "Model/Card/ViewCard.h"
#include "Model/Card/Clan/Clan.h"
#include "mainwindow.h"
#include "chosegame.h"
int main(int argc, char *argv[])
{
    /*
    QApplication a(argc, argv);

    // Créez une instance de la carte Clan
    Model::Clan card(TWO, ORANGE);

    // Créez une instance de la fenêtre principale
    QWidget mainWindow;
    mainWindow.setWindowTitle("Test ViewCard");

    // Créez une instance de ViewCard
    ViewCard viewCard(&mainWindow);

    // Définissez la carte à afficher dans ViewCard
    viewCard.setCard(card);

    // Affichez ViewCard dans la fenêtre principale
    viewCard.setParent(&mainWindow);

    // Affichez la fenêtre principale
    mainWindow.show();

    return a.exec();
    */
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
