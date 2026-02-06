#include "seuraaja.h"
#include <iostream>

//täällä pitäs olla kaikki fine

Seuraaja::Seuraaja(string a) {
    nimi = a;
    cout<<"Luodaan seuraaja "<< nimi <<endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string a)
{
    cout<<"Seuraaja "<< nimi <<" sai viestin "<< a <<endl;
}
