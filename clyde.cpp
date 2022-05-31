#include "clyde.h"

Clyde::Clyde()
{
}

void Clyde::new_pos()
{
    srand(time(NULL));
    int rnd = rand()%4;

    switch(rnd){
    case 0: deplacer(1,0);
    case 1: deplacer(-1,0);
    case 2: deplacer(0,1);
    case 3: deplacer(0,-1);
    }
}
