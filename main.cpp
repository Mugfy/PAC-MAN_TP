#include<iostream>
#include "exceptionsizetab.h"

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_enemy,
int x, int y);


int main(int argc, char** argv)
{

//on test le fonctionnement des try catch
    int tab_x[1];
    int tab_y[1];
    int x = 1;
    int y = 2;
    int nbreemeny = -4 ;

    int tab_x2[1];
    int tab_y2[1];
    int x2 = 1;
    int y2 = 2;
    int nbreemeny2 = 2 ;

    try
      {
      detecter_collision(tab_x,tab_y,nbreemeny,x,y);
      }
      catch (ExceptionSizeTab& eb)
      {
      std::cout << "On a lever une exception au niveau du 'nbre d'enemy' . ";
      }

    try
      {
      detecter_collision(tab_x2,tab_y2,nbreemeny2,x2,y2);
      }
      catch (ExceptionSizeTab& eb)
      {
      std::cout << "On a lever une exception au niveau du 'nbre d'enemy' . ";
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
