#include "clyde.h"

Clyde::Clyde(int x, int y, Background* parent):Ennemi(x,y,parent)
{
}

void Clyde::new_pos()
{
    srand(time(NULL));
    int rnd = rand()%4;

    switch(rnd){
    case 0:
        deplacer(1,0);
        break;
    case 1:
        deplacer(-1,0);
        break;
    case 2:
        deplacer(0,1);
        break;
    case 3:
        deplacer(0,-1);
        break;
    default:
        break;
    }
}
