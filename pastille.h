#ifndef PASTILLE_H
#define PASTILLE_H

#include "drawableelem.h"
#include "observercollision.h"

class pastille : public DrawableElem, public ObserverCollision
{
private:
    Background* background;
public:
    pastille();\
    void collision(NotifierCollision notifieur);
};

#endif // PASTILLE_H
