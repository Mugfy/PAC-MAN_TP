#include "observercollision.h"
#include <iostream>
ObserverCollision::ObserverCollision()
{

}

void ObserverCollision::collision(NotifierCollision notifieur){
    if (test_collision(X_collision,Y_collision) == 1){
        std::cout <<"Il ya eu une collision"<<std::endl; //erreur " << " du cout
    }
}

bool ObserverCollision::test_collision(int x, int y){

    //en utilisant les pointeurs sur les positions x et y de l'ennemi
    //on compare les 2 coordonnees (faux car les pointeur sont en private de ennemi)

    //si les 2 coordonnes sont identiques on revoit 1
    if (pointeursur_Y_ennemy* == y && pointeursur_X_ennemy* == x){
    return 1;}

    //sinon on revoit 0
    else {return 0;}
}
