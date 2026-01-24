#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();

    bool askSecret(string, int, int);
private:
    int flour;
    int water;
    string password = "pizza";

    int makePizza(int, int);
};

#endif // ITALIANCHEF_H
