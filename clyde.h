#ifndef CLYDE_H
#define CLYDE_H

#include <random>
#include <ctime>

#include "ennemi.h"

class Clyde : public Ennemi
{
public:
    Clyde();
    void new_pos();
};

#endif // CLYDE_H
