#include "chef.h"
#include <iostream>

Chef::Chef(string a)
{
    cout<<"CONSTRUCTOR: kokki on nimeltaan "<<a<<endl;
    chefName = a;
}

Chef::~Chef()
{
    cout<<"DECONSTRUCTOR: "<<chefName<<" tapettu"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ainekset)
{
    int annokset = ainekset / 5;
    cout<<"   DEBUG: "<<chefName<<" voi tehda "<<annokset<<" salaattia."<<endl;
    return annokset;
}

int Chef::makeSoup(int ainekset)
{
    int annokset = ainekset / 3;
    cout<<"   DEBUG: "<<chefName<<" voi tehda "<<annokset<<" keittoa."<<endl;
    return annokset;
}
