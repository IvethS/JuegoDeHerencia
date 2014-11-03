#ifndef PERSONAJE_H_H
#define PERSONAJE_H_H
#include<iostream>

using namespace std;
class Personaje
{
    public:
    int ataque;
    int vida;
    string tipo;
    Personaje(int ataque, int vida);
    Personaje();
    void imprimir();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H_H
