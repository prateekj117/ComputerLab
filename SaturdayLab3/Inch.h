#ifndef INCH_H
#define INCH_H


#include<bits/stdc++.h>
using namespace std;

class Inch
{
    public:
        float in;
        Inch();
        Inch(float val1);
        void display();
        Inch operator+(Inch m);
        Inch operator-(Inch m);
        Inch operator*(Inch m);
        Inch operator/(Inch m);
        void static inOperation(Inch in1,Inch in2, char c);
};

#endif // INCH_H
