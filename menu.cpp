#include "menu.h"

Menu::Menu(QWidget *parent) : QWidget(parent)
{
    // Création des boutons
    QPushButton *startButton = new QPushButton("Démarrer le jeu", this);
    QPushButton *optionsButton = new QPushButton("Options", this);
    QPushButton *exitButton = new QPushButton("Quitter", this);

    // Création du layout horizontal
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(startButton);
    layout->addWidget(optionsButton);
    layout->addWidget(exitButton);

    // Connexion des signaux et des slots
    connect(startButton, &QPushButton::clicked, this, &Menu::play);
    connect(optionsButton, &QPushButton::clicked, this, &Menu::settings);
    connect(exitButton, &QPushButton::clicked, this, &Menu::exit);
}


