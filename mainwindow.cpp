#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Définir l'image de fond
    QPixmap background("/Users/azmanizakary/Desktop/GI02/LO21/Projet/Schotten_Totten/images/schotten-teaseur.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);

    // Le reste de votre code
    QPushButton *quitButton = new QPushButton(this);
    quitButton->setText("Quit");
    quitButton->setStyleSheet("background-color: green;");
    connect(quitButton, SIGNAL(clicked()), SLOT(quitClicked()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    QApplication::quit();
}

void MainWindow::Exit(){
    QApplication::quit();
}

void MainWindow::Play() {

    this->setCentralWidget(game_window);
    this->setFocusPolicy(Qt::StrongFocus);
}

void MainWindow::Settings() {

}

void MainWindow::openMenu() {
    Menu* gamemenu = new Menu();
    this->setCentralWidget(gamemenu);

    connect(gamemenu, &Menu::play, this, &MainWindow::Play);
    connect(gamemenu, &Menu::settings, this, &MainWindow::Settings);
    connect(gamemenu, &Menu::exit, this, &MainWindow::Exit);
}

void MainWindow::closeMenu() {
    this->setCentralWidget(game_window);
}


