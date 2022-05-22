#include "personnage.h"

Personnage::Personnage()
{
}

void Personnage::setMovement(std::string Movement)
{
    currMovement = Movement;
}

bool Personnage::new_pos()
{
    //On met en place les constantes pour les bornes
    const int xmin = 0;
    const int xmax = 32;
    const int ymin = 0;
    const int ymax = 15;

    //On modifie les coordonées pour chaque commande
    if((currMovement == "UP") && ((pos_y+1)<=ymax)){
         pos_y+=1;
         notify(pos_x, pos_y);
         return true;
    }
    else if((currMovement == "DOWN") && ((pos_y-1)>=ymin)){
         pos_y-=1;
         notify(pos_x, pos_y);
         return true;
    }
    else if((currMovement == "RIGHT") && ((pos_x+1)<=xmax)){
         pos_x+=1;
         notify(pos_x, pos_y);
         return true;
    }
    else if((currMovement == "LEFT") && ((pos_x-1)>=xmin)){
         pos_x-=1;
         notify(pos_x, pos_y);
         return true;
    }
    else if(currMovement == "IDLE"){
        notify(pos_x, pos_y);
        return false;
    }
    //Si on sort des limites
    else if((currMovement == "UP") || (currMovement == "DOWN") || (currMovement == "LEFT") || (currMovement == "RIGHT")){
         throw ExceptionBounds();
    }
    //Si on entre une commande non reconnue
    else{
        throw ExceptionCommand();
    }
}
