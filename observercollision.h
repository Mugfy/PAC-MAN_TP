#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H

class ObserverCollision
{
private:
public:
    ObserverCollision();
    virtual void collision() =0;
    virtual bool test_collision(int, int) =0;

};

#endif // OBSERVERCOLLISION_H
