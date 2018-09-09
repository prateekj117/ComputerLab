#ifndef CENTIMETRE_H
#define CENTIMETRE_H

#include<bits/stdc++.h>
using namespace std;

class CentiMetre
{
   public:
        float cm;
        CentiMetre();
        CentiMetre(float val1);
        void display();
        CentiMetre operator+(CentiMetre m);
        CentiMetre operator-(CentiMetre m);
        CentiMetre operator*(CentiMetre m);
        CentiMetre operator/(CentiMetre m);
        void static cmOperation(CentiMetre cm1,CentiMetre cm2, char c);
};

#endif // CENTIMETRE_H
