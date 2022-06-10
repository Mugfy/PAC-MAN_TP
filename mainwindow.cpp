#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Créer un personnage, une pastille et un clyde (allocation dynamique)

    PacMan_ = new Personnage(10, 6, ui->centralwidget);
    Fantome_ = new Clyde(17, 10, ui->centralwidget);
    Pastille_ = new pastille(1, 2, ui->centralwidget);

    PacMan_->addObserver(Fantome_);
    Fantome_->addObserver(PacMan_);
    PacMan_->addObserver(Pastille_);

}

MainWindow::~MainWindow()
{
    delete ui;

    delete PacMan_;
    delete Fantome_;
    delete Pastille_;

}

