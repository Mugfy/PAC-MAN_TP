#ifndef ENNEMI_H
#define ENNEMI_H
#include "observercollision.h"

class Ennemi:ObserverCollision
{
private:
    //les position x et y de l'ennemi
    int position_X;
    int position_y;
public:
    //constructeur par deafut
    Ennemi();

    //la nouvelle position, virtuelle pure
    virtual void new_pos ()=0;

    //fonction deplacer l'ennemi
    void deplacer(int x, int y);



};

#endif // ENNEMI_H
