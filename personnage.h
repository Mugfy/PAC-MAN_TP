#pragma once

#include <string>
#include <iostream>

#include "exceptionbounds.h"
#include "exceptioncommand.h"
#include "notifiercollision.h"
#include "observercollision.h"

class Personnage : public NotifierCollision, public ObserverCollision
{
private:
    int pos_x, pos_y;
    std::string currMovement;
public:
    Personnage();
    void setMovement(std::string);
    bool new_pos();

    //Redéfition des méthodes virtuelles pures de ObserverCollision
    bool test_collision(int, int);
    void collision();
};

