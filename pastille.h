#ifndef PASTILLE_H
#define PASTILLE_H

#include "drawableelem.h"
#include "observercollision.h"

class pastille : public DrawableElem, public ObserverCollision
{
private:
public:
    pastille(int, int, Background*);
    void collision(NotifierCollision notifieur);
};

#endif // PASTILLE_H
