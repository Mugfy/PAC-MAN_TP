#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H

#include <vector>
#include <memory>

#include "observercollision.h"

class NotifierCollision
{
private :
    std::vector<ObserverCollision*> observers;
    int x, y;
public:
    NotifierCollision();
    void addObserver(ObserverCollision*);
    void removeObserver(ObserverCollision*);
    void notify(int, int);
};

#endif // NOTIFIERCOLLISION_H
