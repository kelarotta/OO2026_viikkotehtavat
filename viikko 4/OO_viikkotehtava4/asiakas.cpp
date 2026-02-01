#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string omistaja, double luottoRaja) : kayttotili(omistaja), luottotili(omistaja, luottoRaja) {
    cout<<"Asiakkuus luotu henkilolle  "<< omistaja <<endl;
}

string Asiakas::getNimi() {
    cout<<nimi<<endl;
    return nimi;
}

void Asiakas::showSaldo() {
    // tulostaa molempien tilien (käyttö ja luotto) saldot ruudulle

    cout<<"Kayttotililla rahaa: "<<kayttotili.getBalance()<<" euroa"<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<" euroa"<<endl;
}

bool Asiakas::talletus(double a) {
    // lisätään rahaa käyttötilille
    if (a > 0) {
        kayttotili.deposit(a);
        cout<<"Kayttotilille siirretty rahaa: "<< a <<" euroa"<<endl;
        return true;
    }
    return false;
}

bool Asiakas::nosto(double a) {
    // nostetaan rahaaa käyttötililtä
    if (a > 0) {
        kayttotili.withdraw(a);
        cout<<"Kayttotililta nostettu rahaa: "<< a <<" euroa"<<endl;
        return true;
    }
    return false;
}

bool Asiakas::luotonMaksu(double a) {
    // lisätään rahaa luottotilille
    if (a > 0) {
        luottotili.deposit(a);
        cout<<"Luottotilille maksettu "<< a <<" euroa"<<endl;
        return true;
    }
    return false;
}

bool Asiakas::luotonNosto(double a) {
    // nostetaan rahaa luottotililtä (velkaa)
    if (a > 0) {
        luottotili.withdraw(a);
        cout<<"Luotttotililta nostettu rahaa: "<< a <<" euroa"<<endl;
        return true;
    }
    return false;
}

bool Asiakas::tiliSiirto(double a, Asiakas & kohde) {
    //double saldo = kayttotili.getBalance();
    if (a > 0) {
        kayttotili.withdraw(a);
        cout<<"Kayttotililta nostettu "<< a << " euroa"<<endl;
        kohde.kayttotili.deposit(a);
        cout<<"Tilisiirto suoritettu"<<endl;
        return true;
    }
    return false;
}
