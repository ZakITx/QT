#include "chosegame.h"
#include "ui_chosegame.h"
choseGame::choseGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choseGame)
{
    ui->setupUi(this);
}

choseGame::~choseGame()
{
    delete ui;
}

void choseGame::on_checkBox_2_clicked()
{
    gameWindow->setVersion(1);

}


void choseGame::on_checkBox_clicked()
{
    gameWindow->setVersion(2);
}


void choseGame::on_checkBox_3_clicked()
{
    gameWindow->setMode("Classique");
}


void choseGame::on_checkBox_4_clicked()
{
    gameWindow->setMode("Tactique");
}

