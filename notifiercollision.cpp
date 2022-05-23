#include "notifiercollision.h"

NotifierCollision::NotifierCollision()
{

}

void NotifierCollision::addObserver(ObserverCollision* obs)
{
    //Ajouter l'obs
    observers.push_back(obs);
}

void NotifierCollision::removeObserver(ObserverCollision* obs)
{
    //Supprimer l'obs
    for(int i = 0; i < observers.size(); ++i)
    {
        if(observers[i] == obs){
            observers.erase(observers.begin()+i);
        }
    }
}

void NotifierCollision::notify(int x, int y)
{
    //On parcours la liste des obs
    for (auto obs : observers) {
        //Si il y a collision, appeler collision
        if (obs->test_collision(x, y)) {
           obs->collision();

            //obs->collision(this);
        }
    }

   //On parcours la liste des obs
   /* for(int i = 0; i < observers.size(); ++i)
    {
        //Si il y a collision, appeler collision
        if(observers[i].test_collision(x, y) == true){
            observers[i].collision(this);
        }
    }*/
}
