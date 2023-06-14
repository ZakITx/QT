#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPushButton>
#include <QPalette>
#include <QPixmap>
#include "menu.h"
#include "Model/Game/Game.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Game *game_window;
    friend class choseGame;

private slots:
    void on_pushButton_4_clicked();
    void Play();
    void Settings();
    void Exit();

    void openMenu();
    void closeMenu();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
