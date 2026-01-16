#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int i)
{
    // Konstruktorissa parametrinä annetaan maksimiarvo,
    // mille välille 1-maxNumber peli arpoo arvattavan luvun.

    maxNumber = i;
    playerGuess = 0;
    numOfGuesses = 0;
    srand(time(0));
    randomNumber = rand() %maxNumber;

    cout<<"GAME CONSTRUCTOR: object initialized with  "<<maxNumber<<" as maximum value"<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    // tänne peli

    cout << "Arvaa numero valilta 0-"<< maxNumber <<":"<<endl;

    while (true) {
        cin >> playerGuess;

        if (playerGuess < randomNumber) {
            cout << "Liian pieni..." <<endl;
            numOfGuesses++;
        }
        else if (playerGuess > randomNumber) {
            cout <<"Liian iso..." <<endl;
            numOfGuesses++;
        }
        else {
            numOfGuesses++;
            break;
        }
    }

    printGameResult();
}

void Game::printGameResult()
{
    // printGameResult()-jäsenfunktiosta kutsutaan
    // kun peli on päättynyt. Se tulostaa oikean
    // vastauksen ja kuinka monta arvausta siihen
    //tarvittiin.

    cout<<"Jes! Oikea vastaus on: "<< randomNumber << endl;
    cout<<"Arvauksia meni: "<< numOfGuesses << endl;
}


