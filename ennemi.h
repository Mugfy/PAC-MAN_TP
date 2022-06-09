#ifndef ENNEMI_H
#define ENNEMI_H

#include <iostream>

#include "regularmove.h"
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi : public ObserverCollision , public NotifierCollision, public RegularMove
{
private:
    int pos_x;
    int pos_y;
    Background* background;
public:
    Ennemi(int, int, Background*);

    //méthode virtuelle pure implémentée dans Clyde
    virtual void new_pos () =0;

    //méthode pour forcer les valeurs pour les tests
    void fdeplacer(int, int);

    //méthode de déplacement
    void deplacer(int, int);

    //Redéfition des méthodes virtuelles pures de ObserverCollision
    bool test_collision(int, int);
    //void collision(NotifierCollision);

    //Getters
    int getX();
    int getY();

    //Redefinition des methodes virtuelles pures de RegularMove
    void update_pos();
};

#endif // ENNEMI_H
