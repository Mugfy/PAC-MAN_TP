#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H

#include <vector>
#include <memory>
#include <algorithm>

//#include "observercollision.h"
class ObserverCollision;

class NotifierCollision
{
private :
    std::vector<ObserverCollision*> observers;
public:
    NotifierCollision();
    void addObserver(ObserverCollision*);
    void removeObserver(ObserverCollision*);
    void notify(int, int);
};

#endif // NOTIFIERCOLLISION_H
