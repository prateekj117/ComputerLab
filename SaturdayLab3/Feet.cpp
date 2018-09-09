#include "Feet.h"

Feet::Feet()
{
	ft = 0;
}

Feet::Feet(float val1) {
    ft = val1;
}

void Feet::display() {
		cout << ft << endl;
}

Feet Feet::operator+(Feet m) {
		Feet temp;
		temp.ft = ft + m.ft;
		return temp;
}

Feet Feet::operator-(Feet m) {
		Feet temp;
		temp.ft = ft - m.ft;
		return temp;
}
Feet Feet::operator*(Feet m) {
		Feet temp;
		temp.ft = ft * m.ft;
		return temp;
}
Feet Feet::operator/(Feet m) {
		Feet temp;
		temp.ft = ft / m.ft;
		return temp;
}

void Feet::ftOperation(Feet ft1,Feet ft2, char c) {
		if(c == '+') {
			Feet ft3 = ft1 + ft2;
			ft3.display();
		}
		else if(c == '-') {
			Feet ft3 = ft1 - ft2;
			ft3.display();
		}
		else if(c == '*') {
			Feet ft3 = ft1 * ft2;
			ft3.display();
		}
		else if(c == '/') {
			Feet ft3 = ft1 / ft2;
			ft3.display();
		}
}
