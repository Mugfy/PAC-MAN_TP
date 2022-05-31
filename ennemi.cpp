#include "ennemi.h"
#include <iostream>

Ennemi::Ennemi():RegularMove(8 , 8 , background)
{
    set_background_image("clyde_dr_1");
}

void Ennemi::deplacer(int x, int y)
{
    pos_x+=x;
    pos_y+=y;

    notify(pos_x, pos_y);
}

void Ennemi::fdeplacer(int x, int y)
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
        return(true);
    }

    //Sinon renvoyer faux
    return(false);
}

void Ennemi::update_pos(){
    new_pos();
}

int Ennemi::getX()
{
    return pos_x;
}

int Ennemi::getY()
{
    return pos_y;
}
