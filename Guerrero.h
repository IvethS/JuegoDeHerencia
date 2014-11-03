#ifndef GUERRERO_H
#define GUERRERO_H
#include<iostream>
#include "Personaje.h.h"

class Guerrero : public Personaje
{
    public:
        Guerrero(int ataque, int vida);
        virtual ~Guerrero();
    protected:
    private:
};

#endif // GUERRERO_H
