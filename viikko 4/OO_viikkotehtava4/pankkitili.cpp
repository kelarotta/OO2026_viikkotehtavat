#include "pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(string omistaja) {
    cout<<"Pankkitili luotu henkilolle:  "<<omistaja<<endl;
}

double Pankkitili::getBalance() {
    return saldo;
}

bool Pankkitili::deposit(double a) {
    // tekee talletuksen tilille
    if (a > 0) {
        saldo = saldo + a;
        return true;
    }
    return false;
}

bool Pankkitili::withdraw(double a) {
    // tekee noston tililtä
    if(saldo >= a) {
        if (a > 0) {
            saldo = saldo - a;
            return true;
        }
    }

    return false;
}
