#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas jari("Jari", 2000);
    jari.showSaldo();
    cout<<""<<endl;
    jari.talletus(250);
    jari.luotonNosto(150);
    jari.showSaldo();
    cout<<""<<endl;

    Asiakas bertta("Bertta", 1000);
    bertta.showSaldo();
    cout<<""<<endl;

    cout<<"Jari"<<endl;
    jari.showSaldo();
    jari.tiliSiirto(50, bertta);
    cout<<"Bertta"<<endl;
    bertta.showSaldo();

    return 0;
}
