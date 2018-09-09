#include "Metre.h"

Metre::Metre()
{
	m = 0;
}

Metre::Metre(float val1) {
    m = val1;
}

void Metre::display() {
		cout << m << endl;
}

Metre Metre::operator+(Metre e) {
		Metre temp;
        temp.m = m + e.m;
		return temp;
}

Metre Metre::operator-(Metre e) {
		Metre temp;
		temp.m = m - e.m;
		return temp;
}
Metre Metre::operator*(Metre e) {
		Metre temp;
		temp.m = m * e.m;
		return temp;
}
Metre Metre::operator/(Metre e) {
		Metre temp;
		temp.m = m / e.m;
		return temp;
}

void Metre::mOperation(Metre m1, Metre m2, char c) {
		if(c == '+') {
			Metre m3 = m1 + m2;
			m3.display();
		}
		else if(c == '-') {
			Metre m3 = m1 - m2;
			m3.display();
		}
		else if(c == '*') {
			Metre m3 = m1 * m2;
			m3.display();
		}
		else if(c == '/') {
			Metre m3 = m1 / m2;
			m3.display();
		}
}
