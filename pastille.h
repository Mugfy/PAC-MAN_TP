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

    //On redéfinit la méthode virtuelle pure de ObserverCollision
    bool test_collision(int x, int y);
};

#endif // PASTILLE_H
