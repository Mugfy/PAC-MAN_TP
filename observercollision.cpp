#include "observercollision.h"

ObserverCollision::ObserverCollision()
{
}

void ObserverCollision::collision(NotifierCollision notifieur)
{
    std::cout << "Il y a une collision" << std::endl;
}
