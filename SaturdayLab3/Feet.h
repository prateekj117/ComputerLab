#ifndef FEET_H
#define FEET_H

#include<bits/stdc++.h>
using namespace std;

class Feet
{
    public:
        float ft;
        Feet();
        Feet(float val1);
        void display();
        Feet operator+(Feet m);
        Feet operator-(Feet m);
        Feet operator*(Feet m);
        Feet operator/(Feet m);
        void static ftOperation(Feet km1,Feet km2, char c);
};

#endif // FEET_H
