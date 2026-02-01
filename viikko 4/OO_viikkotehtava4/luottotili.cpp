#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>
#include <string>
using namespace std;

// Luottotili on aina 0 tai miinuksella, se paljonko on miinuksella kertoo
// paljonko omistaja on velkaa

Luottotili::Luottotili(string omistaja, double luottoRaja) : Pankkitili(omistaja) {
    cout<<"Luottotili luotu henkilolle: "<<omistaja<<", luottoraja "<<luottoRaja<<" euroa"<<endl;
    saldo = luottoRaja;
}

bool Luottotili::deposit(double a) {
    // maksetaan luottovelkaa
    if (saldo < luottoRaja) {
        if (a > 0) {
            saldo = saldo + a;
            return true;
        }
    }
    return false;
}

bool Luottotili::withdraw(double a) {
    // ollaan velkaa eli otetaan luottotililtä
    //if (sa <= luottoRaja) {
        if (a > 0) {
            saldo = saldo - a;
            return true;
        }
    //}
    return false;

}
