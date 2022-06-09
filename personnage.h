#pragma once

#include <string>
#include <iostream>

#include "exceptionbounds.h"
#include "exceptioncommand.h"
#include "notifiercollision.h"
#include "observercollision.h"
#include "interactive.h"

class Personnage : public NotifierCollision, public ObserverCollision, public Interactive
{
private:
    std::string currMovement;
public:
    Personnage(int, int, Background*);
    void setMovement(std::string);
    bool new_pos();

    //Redéfition des méthodes virtuelles pures de ObserverCollision
    bool test_collision(int, int);
    //void collision(NotifierCollision);

    int getX();
    int getY();

    //Redéfition des méthodes virtuelles pures de Interactive
    //void key_pressed(char key);
    void arrow_pressed(std::string cmd);

    //Redéfition des méthodes virtuelles pures de RegulareMove
    void update_pos();
};

