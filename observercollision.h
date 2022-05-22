#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
#include "notifiercollision.h"

class ObserverCollision
{
public:
    ObserverCollision();
    void collision(NotifierCollision notifieur);
    bool test_collision(int x, int y);

};

#endif // OBSERVERCOLLISION_H
