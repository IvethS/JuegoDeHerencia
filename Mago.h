#ifndef MAGO_H
#define MAGO_H
#include<iostream>
#include "Personaje.h.h"
#include "Mago.h"

class Mago : public Personaje
{
    public:
        Mago(int ataque, int vida);
        virtual ~Mago();
    protected:
    private:
};

#endif // MAGO_H
