#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

Notifikaattori::Notifikaattori() {
    cout<<"Luodaan Notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja *a) {
    // lisätään seuraaja
    cout<<"Notifikaattori lisaa seuraajan "<< a -> getNimi() <<endl;
    a -> next = seuraajat;
    seuraajat = a;
}

void Notifikaattori::poista(Seuraaja * a) {
// täällä poistetaan seuraaja
    if(seuraajat == a)
    {
        seuraajat = seuraajat->next;
        cout<<"Notifikaattori poistaa seuraajan "<< a-> getNimi() <<endl;
        return;
    }

    Seuraaja *now = seuraajat;
    while(now -> next)
    {
        if(now -> next == a)
        {
            now -> next = a -> next;
            cout<<"Notifikaattori poistaa seuraajan "<< a-> getNimi() <<endl;
            return;
        }
        now = now -> next;
    }
}

void Notifikaattori::tulosta() {
// ideana on tulostaa seuraajien nimi,
// eli kutsua silmukassa jokaiselle seuraajalle
// getNimi()-jäsenfunktiota ja tulostaa se konsolille.
    cout<<"Notifikaattorin seuraajat: "<<endl;
    Seuraaja *now = seuraajat;
    while(now != nullptr)
    {
        cout<<"Seuraaja "<< now -> getNimi() <<endl;
        now = now -> next;
    }
}

void Notifikaattori::postita(string s) {
// silmukassa kutsutaan jokaisen
// seuraajan paivitys()-funktiota, jonka parametrinä
// on sama viesti kuin notifikaattorin postita()-funktiossa.
// Funktio paivitys() sitten tulostaa viestin ruudulle.
    cout<<"Notifikaattori postaa viestin "<< s <<endl;
    Seuraaja *now = seuraajat;

    while(now != nullptr)
    {
        now -> paivitys(s);
        now = now -> next;
    }
}
