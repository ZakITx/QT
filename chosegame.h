#ifndef CHOSEGAME_H
#define CHOSEGAME_H

#include <QWidget>
#include "Model/Game/Game.h"
#include "mainwindow.h"

namespace Ui {
class choseGame;
}

class choseGame : public QWidget
{
    Q_OBJECT

public:
    explicit choseGame(QWidget *parent = nullptr);
    ~choseGame();
private slots:
    void on_checkBox_2_clicked();

    void on_checkBox_clicked();

    void on_checkBox_3_clicked();

    void on_checkBox_4_clicked();

private:
    Game * gameWindow;
    Ui::choseGame *ui;
};

#endif // CHOSEGAME_H
