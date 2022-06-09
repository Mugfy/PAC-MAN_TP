#include <iostream>
#include <string>
#include <vector>
#include <array>

#include <QApplication>
#include "mainwindow.h"

#include "exceptionsizetab.h"
#include "exceptionbounds.h"
#include "exceptioncommand.h"

#include "clyde.h"
#include "personnage.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
