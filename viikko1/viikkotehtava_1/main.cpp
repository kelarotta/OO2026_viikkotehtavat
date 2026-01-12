#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    int arvaukset = 0;
    int arvaus;

    srand(time(0));
    int randomNum = rand() %maxnum;
    int arvottu = randomNum;

    while (true) {
        cin >> arvaus;

        if (arvaus < arvottu) {
            cout << "liian pieni" <<endl;
            arvaukset++;
        }
        else if (arvaus > arvottu) {
            cout <<"liian iso" <<endl;
            arvaukset++;
        }
        else {
            cout <<"oikein!"<<endl;
            arvaukset++;
            cout <<"Arvauskertoja: "<<arvaukset<<endl;
            break;
        }
    }

    return arvaukset;
}

int main()
{
    int turhaLoppu = 0;
    int maksimi;

    cout << "Anna numeroraja: "<<endl;
    cin >> maksimi;

    cout << "Arvaa numero: " << endl;
    game(maksimi);


    cin >> turhaLoppu;
    return 0;
}
