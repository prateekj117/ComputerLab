#include "Inch.h"

Inch::Inch()
{
	in = 0;
}

Inch::Inch(float val1) {
    in = val1;
}

void Inch::display() {
		cout << in << endl;
}

Inch Inch::operator+(Inch m) {
		Inch temp;
		temp.in = in + m.in;
		return temp;
}

Inch Inch::operator-(Inch m) {
		Inch temp;
		temp.in = in - m.in;
		return temp;
}
Inch Inch::operator*(Inch m) {
		Inch temp;
		temp.in = in * m.in;
		return temp;
}
Inch Inch::operator/(Inch m) {
		Inch temp;
		temp.in = in / m.in;
		return temp;
}

void Inch::inOperation(Inch in1, Inch in2, char c) {
		if(c == '+') {
			Inch in3 =in1 + in2;
			in3.display();
		}
		else if(c == '-') {
			Inch in3 = in1 - in2;
			in3.display();
		}
		else if(c == '*') {
			Inch in3 = in1 * in2;
			in3.display();
		}
		else if(c == '/') {
			Inch in3 = in1 / in2;
			in3.display();
		}
}
