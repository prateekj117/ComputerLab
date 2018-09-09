#include "CentiMetre.h"

CentiMetre::CentiMetre()
{
	cm = 0;
}

CentiMetre::CentiMetre(float val1) {
    cm = val1;
}

void CentiMetre::display() {
		cout << cm << endl;
}

CentiMetre CentiMetre::operator+(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm + m.cm;
		return temp;
}

CentiMetre CentiMetre::operator-(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm - m.cm;
		return temp;
}
CentiMetre CentiMetre::operator*(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm * m.cm;
		return temp;
}
CentiMetre CentiMetre::operator/(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm / m.cm;
		return temp;
}

void CentiMetre::cmOperation(CentiMetre cm1, CentiMetre cm2, char c) {
		if(c == '+') {
			CentiMetre cm3 = cm1 + cm2;
			cm3.display();
		}
		else if(c == '-') {
			CentiMetre cm3 = cm1 - cm2;
			cm3.display();
		}
		else if(c == '*') {
			CentiMetre cm3 = cm1 * cm2;
			cm3.display();
		}
		else if(c == '/') {
			CentiMetre cm3 = cm1 / cm2;
			cm3.display();
		}
}
