#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H

//La classe creer par l'etudiant 1  notifiercollision
#include "notifiercollision.h"

class ObserverCollision
{
private:
    int X_collision;
    int Y_collision;
public:
    ObserverCollision();
    void collision(NotifierCollision notifieur);
    bool test_collision(int x, int y);

};

#endif // OBSERVERCOLLISION_H
