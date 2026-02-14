#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;


int main ()
{
    int selection =0;
    string nimi;
    int ika;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout<<"Student name ?"<<endl;
            cin>>nimi;
            cout<<"Student age ?"<<endl;
            cin>>ika;
            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(nimi, ika);
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            for (auto& entry : studentList)
            {
                entry.printStudentInfo();
                cout << "\n";
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(),[](Student & a, Student & b){return a.getName()<b.getName();});
            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (auto& entry : studentList) {
                entry.printStudentInfo();
                cout << "\n";
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getAge() < b.getAge();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            for (auto& entry : studentList) {
                entry.printStudentInfo();
                cout << "\n";
            }
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            string searchName;
            cout << "Anna haettavan opiskelijan nimi: ";
            cin >> searchName;

            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            auto it = find_if(studentList.begin(), studentList.end(),[searchName](Student& s){return s.getName() == searchName;});

            if (it != studentList.end())
                it->printStudentInfo();
            else
                cout << "Opiskelijaa ei loytynyt\n";
            }
            break;
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }

    }while(selection < 5);

    return 0;

}


