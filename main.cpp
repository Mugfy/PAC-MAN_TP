#include <iostream>
#include <string>
#include <vector>

//#include <QApplication>
//#include "mainwindow.h"

#include "exceptionsizetab.h"
#include "exceptionbounds.h"
#include "exceptioncommand.h"

#include "clyde.h"
#include "personnage.h"

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_enemmis, int x, int y);

bool deplacer_personnage(int&, int&, std::string);

int main(int argc, char *argv[])
{

Clyde clyde1;
Clyde clyde2;
Personnage personnage;

clyde1.deplacer(1,0);
personnage.setMovement("UP");
personnage.new_pos();

    return 0;
}



//Fct de base pour deplacer le personnage
bool deplacer_personnage(int& x, int& y, std::string cmd){

    //On met en place les constantes pour les bornes
    const int xmin = 0;
    const int xmax = 32;
    const int ymin = 0;
    const int ymax = 15;

    //On modifie les coordonées pour chaque commande
    if(cmd == "UP" && y+1<=ymax){
         y+=1;
         return true;
    }
    else if(cmd == "DOWN" && y-1>=ymin){
         y-=1;
         return true;
    }
    else if(cmd == "RIGHT" && x+1<=xmax){
         x+=1;
         return true;
    }
    else if(cmd == "LEFT" && x-1>=xmin){
         x-=1;
         return true;
    }
    else if(cmd == "IDLE"){
        return false;
    }
    //Si on sort des limites
    else if(cmd == "UP" || cmd == "DOWN" || cmd == "LEFT" || cmd == "RIGHT"){
         throw ExceptionBounds();
    }
    //Si on entre une commande non reconnue
    else{
        throw ExceptionCommand();
    }
}

//Fct de base pour detecter les collisions avec les ennemis
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis,int x, int y)
{
     //Déclaration et initialisation des variables
     ExceptionSizeTab _uneexception;
     int i = 0;
     int u = 0;
     bool collision = 0;

     //...
     if (nb_ennemis > 0 ){
         std::vector<int> tableaux(nb_ennemis);
         std::vector<int> tableauy(nb_ennemis);

         //...
         for(i=0; i<nb_ennemis; i++){
             tableaux[i] = ennemis_x[i];
             tableauy[i] = ennemis_y[i];
         }
         //...
         for(u=0; u<nb_ennemis; u++){
             if((tableaux[u] == x) && (tableauy[u] == y))
                 collision = 1;
         }
         return collision;
     }
     //Si la valeur de nb_ennemis n'est pas bonne
     else{
         throw _uneexception;
     }
}
