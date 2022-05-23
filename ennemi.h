#ifndef ENNEMI_H
#define ENNEMI_H

#include <iostream>

#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi : public ObserverCollision , public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
public:
    Ennemi();

    //méthode virtuelle pure implémentée dans Clyde
    virtual void new_pos () =0;

    //méthode pour forcer les valeurs pour les tests
    void deplacer(int, int);

    //Redéfition des méthodes virtuelles pures de ObserverCollision
    bool test_collision(int, int);
    void collision();



    //A RETIRER

    //Setters
    void setX(int);
    void setY(int);

    //Getters
    int getX();
    int getY();

};

#endif // ENNEMI_H
