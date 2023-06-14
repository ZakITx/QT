#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

// Classe Joueur
class Joueur
{
public:
    QString nom;

    void afficherNom()
    {
        qDebug() << "Le nom du joueur est :" << nom;
    }
};

int QT(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Création de la fenêtre principale
    QWidget window;
    window.setWindowTitle("Saisie du nom");
    window.setFixedSize(300, 100);

    // Création des widgets
    QLabel label("Entrez votre nom :", &window);
    QLineEdit lineEdit(&window);
    QPushButton button("Valider", &window);

    // Mise en place de la disposition horizontale
    QHBoxLayout layout;
    layout.addWidget(&label);
    layout.addWidget(&lineEdit);
    layout.addWidget(&button);
    window.setLayout(&layout);

    // Instanciation de la classe Joueur
    Joueur joueur;

    // Connexion du signal clicked du bouton à la fonction de traitement
    QObject::connect(&button, &QPushButton::clicked, [&]()
                     {
        joueur.nom = lineEdit.text();
        joueur.afficherNom(); });

    window.show();

    return app.exec();
}
