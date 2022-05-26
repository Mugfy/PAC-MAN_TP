#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H

#include <iostream>

#include "notifiercollision.h"

class ObserverCollision
{
private:
    NotifierCollision notifieur;
public:
    ObserverCollision();
    void collision(NotifierCollision);
    virtual bool test_collision(int, int) =0;

};

#endif // OBSERVERCOLLISION_H
