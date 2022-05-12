#include<iostream>

#include "exceptionsizetab.h"

#include "exceptionbounds.h"
#include "exceptioncommand.h"
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_enemy,
int x, int y);

bool deplacer_personnage(int&, int&, std::string);

int main(int argc, char *argv[])
{
    //Déclaration et initialisation des variables
    int x=0, y=0;
    std::string saisie="IDLE";

    //Boucle "infinie" pour demander indéfiniemen la saisie à l'utilisateur
    while(true){

        //Demander la commande a l'utilisateur
        std::getline(std::cin, saisie);

        //Exceptions
        try{
            deplacer_personnage(x, y, saisie);
        }
        catch(ExceptionCommand& ec){
            std::cout << "La commande entree n'est pas reconnue" << std::endl;
        }
        catch(ExceptionBounds& eb){
            std::cout << "Le deplacement demande sort des limites" << std::endl;
        }
        //Afficher les coordonees
        std::cout << "x=" << x << " y=" << y << std::endl;
    }



    int tab_x2[1];
    int tab_y2[1];
    int x2 = 1;
    int y2 = 2;
    int nbreemeny2 = 2 ;

//Fct de base pour deplacer le personnage
bool deplacer_personnage(int& x, int& y, std::string cmd){

    //On met en place les constantes pour les bornes
    const int xmin = 0;
    const int xmax = 32;
    const int ymin = 0;
    const int ymax = 15;
    try
      {
      detecter_collision(tab_x2,tab_y2,nbreemeny2,x2,y2);
      }
      catch (ExceptionSizeTab& eb)
      {
      std::cout << "On a lever une exception au niveau du 'nbre d'enemy' . ";
      }

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










int enn_x[4] = {1, 2, 3, 4}, enn_y[4] = {1, 2, 3, 4};
 if (detecter_collision(enn_x, enn_y, 4, x, y))
 {
 std::cout << "Collision" << std::endl;
 }
 return 0;

 }



 bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_enemy,
int x, int y)
{
     ExceptionSizeTab _uneexception;
 if (nb_enemy <= 0 ){
    throw  _uneexception;
     std::cout<< "hello ";
 }
else {
 }
 }
