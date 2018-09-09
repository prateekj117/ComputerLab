#include "KiloMetre.h"

KiloMetre::KiloMetre()
{
	km = 0;
}

KiloMetre::KiloMetre(float val1) {
    km = val1;
}

void KiloMetre::display() {
		cout << km << endl;
}

KiloMetre KiloMetre::operator+(KiloMetre m) {
		KiloMetre temp;
		temp.km = km + m.km;
		return temp;
}

KiloMetre KiloMetre::operator-(KiloMetre m) {
		KiloMetre temp;
		temp.km = km - m.km;
		return temp;
}
KiloMetre KiloMetre::operator*(KiloMetre m) {
		KiloMetre temp;
		temp.km = km * m.km;
		return temp;
}
KiloMetre KiloMetre::operator/(KiloMetre m) {
		KiloMetre temp;
		temp.km = km / m.km;
		return temp;
}

void KiloMetre::kmOperation(KiloMetre km1,KiloMetre km2, char c) {
		if(c == '+') {
			KiloMetre km3 = km1 + km2;
			km3.display();
		}
		else if(c == '-') {
			KiloMetre km3 = km1 - km2;
			km3.display();
		}
		else if(c == '*') {
			KiloMetre km3 = km1 * km2;
			km3.display();
		}
		else if(c == '/') {
			KiloMetre km3 = km1 / km2;
			km3.display();
		}
}
