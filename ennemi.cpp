#include "ennemi.h"

Ennemi::Ennemi()
{
}

void Ennemi::deplacer(int x, int y)
{
    pos_x=x;
    pos_y=y;

    notify(pos_x, pos_y);
}

bool Ennemi::test_collision(int x, int y)
{
    //Si les coord sont les mêmes que l'ennemi, renvoyer vrai
    if((x == pos_x) && (y == pos_y))
    {
        collision();
        return(true);
    }

    //Sinon renvoyer faux
    return(false);
}

void Ennemi::collision()
{
    std::cout << "Il y a une collision avec un ennemi" << std::endl;
}





void Ennemi::setX(int x)
{
    pos_x=x;
}

void Ennemi::setY(int y)
{
    pos_y=y;
}

int Ennemi::getX()
{
    return pos_x;
}

int Ennemi::getY()
{
    return pos_y;
}
