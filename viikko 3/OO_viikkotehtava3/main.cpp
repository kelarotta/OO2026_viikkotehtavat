#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    Chef gordon("Gordon");
    gordon.makeSalad(33);
    gordon.makeSoup(7);

    cout<<"  "<<endl;

    ItalianChef mario("Mario");
    mario.makeSalad(15);
    mario.makeSoup(12);
    mario.askSecret("pizza", 40, 20);

    cout<<"  "<<endl;

    return 0;
}
