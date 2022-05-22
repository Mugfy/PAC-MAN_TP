#pragma once

#include <string>

#include "exceptionbounds.h"
#include "exceptioncommand.h"
#include "notifiercollision.h"

class Personnage : public NotifierCollision
{
private:
    int pos_x, pos_y;
    std::string currMovement;
public:
    Personnage();
    void setMovement(std::string);
    bool new_pos();
};

