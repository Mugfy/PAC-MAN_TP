#include "pastille.h"

pastille::pastille(): DrawableElem(8 , 8 , background)
{
 set_background_image("pastille");
}

void pastille::collision(NotifierCollision notifieur){
    std::cout << "Il y a une collision avec une pastille" << std::endl;
    notifieur.removeObserver(this);
    hide();
}
