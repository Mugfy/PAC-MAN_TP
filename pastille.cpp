#include "pastille.h"

pastille::pastille(int x, int y, Background* parent): DrawableElem(x, y, parent)
{
 set_background_image("pastille");
}

void pastille::collision(NotifierCollision notifieur){
    std::cout << "Il y a une collision avec une pastille" << std::endl;
    notifieur.removeObserver(this);
    hide();
}
