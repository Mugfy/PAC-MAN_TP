#include "clyde.h"

Clyde::Clyde()
{

}

void Clyde::new_pos()
{
    srand(time(NULL));
    int x = (getX() + rand()%10); //valeur aléatoire en 0 et 9
    int y = (getY() + rand()%10);

    //Demander au professeur car ici je ne savais pas comment modifier les coord donc j'ai mis des setters
    setX(x);
    setY(y);
}
