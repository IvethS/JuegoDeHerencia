#include "Personaje.h.h"



Personaje::Personaje(int ataque, int vida)
{
    this->ataque=ataque;
    this->vida = vida;
}

Personaje::Personaje()
{
    //ctor
}

Personaje::~Personaje()
{
    //dtor
}

void Personaje::imprimir()
{
    cout<<"Vida: "<<vida<<"\tAtaque: "<<ataque<<endl;
}
