#include "italianchef.h"
#include <string>
#include <iostream>

ItalianChef::ItalianChef(string s) : Chef(s)
{
    cout<<"CONSTRUCTOR: italialainen kokki on nimeltaan "<<s<<endl;
    chefName = s;
}

ItalianChef::~ItalianChef()
{
    cout<<"DECONSTRUCTOR: italialainen kokki "<<chefName<<" tapettu"<<endl;
}

bool ItalianChef::askSecret(string a, int f, int w)
{
    if(a == password) {
        cout<<"   DEBUG: salasana oikein"<<endl;
        makePizza(f, w);
        return true;
    }
    return false;
}

int ItalianChef::makePizza(int f, int w)
{
    cout<<"   DEBUG: "<<chefName<<" voi tehda "<<min(f, w) / 5<<" pitsaa"<<endl;
    return min(f, w) / 5;
}
