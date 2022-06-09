#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "personnage.h"
#include "clyde.h"
#include "pastille.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Personnage* PacMan_;
    Clyde* Fantome_;
    pastille* Pastille_;

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
