#include <iostream>
#include <string>
#include <vector>
#include <array>

//#include <QApplication>
//#include "mainwindow.h"

#include "exceptionsizetab.h"
#include "exceptionbounds.h"
#include "exceptioncommand.h"

#include "clyde.h"
#include "personnage.h"

int main(int argc, char *argv[])
{
   /* Personnage Pac;
    Clyde Clydo;
    Clyde Clydo2;
    Pac.addObserver(&Clydo);
    Pac.addObserver(&Clydo2);
    Clydo.addObserver(&Pac);
    Clydo2.addObserver(&Pac);
    std::string saisie;

    Clydo2.fdeplacer(15,8);
    Clydo2.fdeplacer(16,2);

    while(true){

        std::getline(std::cin, saisie);
        Pac.setMovement(saisie);

        try{
            Pac.new_pos();
        }
        catch(ExceptionBounds eb){
            std::cout << "Ce déplacement ferait sortir le personnage du tableau" << std::endl;
            Pac.setMovement("IDLE");
        }
        catch(ExceptionCommand ec){
            std::cout << "Cette commande n'est pas reconnue, essayez UP, DOWN, LEFT, RIGHT ou IDLE" << std::endl;
            Pac.setMovement("IDLE");
        }
        catch(...){
            std::cout << "Il y a eu un problème" << std::endl;
            return 6;
        }

        std::cout << "Pac est actuellement en x=" << Pac.getX() << " y=" << Pac.getY() << std::endl;

    }*/

    return 0;
}
