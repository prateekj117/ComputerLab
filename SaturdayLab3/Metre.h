#ifndef METRE_H
#define METRE_H

#include<bits/stdc++.h>
using namespace std;

class Metre
{
    public:
        float m;
        Metre();
        Metre(float val1);
        void display();
        Metre operator+(Metre e);
        Metre operator-(Metre e);
        Metre operator*(Metre e);
        Metre operator/(Metre e);
        void static mOperation(Metre km1,Metre km2, char c);
};

#endif // METRE_H
