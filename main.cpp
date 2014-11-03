#include <iostream>
#include "Guerrero.h"
#include "Mago.h"
#include <vector>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
vector<Personaje*>personajes;
personajes.push_back(new Guerrero(10,100));
personajes.push_back(new Mago(7,80));
personajes.push_back(new Guerrero(15,120));

for (int i=0; i<personajes.size();i++)
{
    personajes[i]-> imprimir();
}
return 0;

}

 /*   Guerrero g(10,120);
    g.imprimir();
    Mago m(7,80);
    m.imprimir();
return 0;*/
