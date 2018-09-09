#ifndef KILOMETRE_H
#define KILOMETRE_H

#include<bits/stdc++.h>
using namespace std;

class KiloMetre
{
    public:
        float km;
        KiloMetre();
        KiloMetre(float val1);
        void display();
        KiloMetre operator+(KiloMetre m);
        KiloMetre operator-(KiloMetre m);
        KiloMetre operator*(KiloMetre m);
        KiloMetre operator/(KiloMetre m);
        void static kmOperation(KiloMetre km1,KiloMetre km2, char c);
};

#endif // KILOMETRE_H
