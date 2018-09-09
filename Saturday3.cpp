#include<bits/stdc++.h>
using namespace std;

float mtokm(float a) {
	a = (0.001)*a;
	return a;	
}

float fttokm(float a) {
	a = (0.000305)*a;
	return a;
}

float intokm(float a) {
	a = (0.0000254)*a;
	return a;
}

float cmtokm(float a) {
	a = (0.00001)*a;
	return a;
}

float fttom(float a) {
	a = (0.305)*a;
	return a;
}

float intom(float a) {
	a = (0.0254)*a;
	return a;
}

float cmtom(float a) {
	a = (0.01)*a;
	return a;
}

float intoft(float a) {
	a = (0.08333)*a;
	return a;
}

float cmtoft(float a) {
	a = (0.0328)*a;
	return a;
}

float cmtoin(float a) {
	a = (0.394)*a;
	return a;
}


class KiloMetre {
	float km;
	public:
		KiloMetre() {
			km = 0;
		}
		
		KiloMetre(float val1) {
			km = val1;
		}
		
	void display() {
		cout << km << endl;
	}
		
	KiloMetre operator+(KiloMetre m) {
		KiloMetre temp;
		temp.km = km + m.km;
		return temp;
	}
	
	KiloMetre operator-(KiloMetre m) {
		KiloMetre temp;
		temp.km = km - m.km;
		return temp;
	}
	
	KiloMetre operator*(KiloMetre m) {
		KiloMetre temp;
		temp.km = km * m.km;
		return temp;
	}
	
	KiloMetre operator/(KiloMetre m) {
		KiloMetre temp;
		temp.km = km / m.km;
		return temp;
	}
	void static kmOperation(KiloMetre km1,KiloMetre km2, char c) {
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
};

class Metre {
	float m;
	public:
		Metre() {
			m = 0;
		}
		
		Metre(float val1) {
			m = val1;
		}
		
	void display() {
		cout << m << endl;
	}
		
	Metre operator+(Metre e) {
		Metre temp;
		temp.m = m + e.m;
		return temp;
	}
	
	Metre operator-(Metre e) {
		Metre temp;
		temp.m = m - e.m;
		return temp;
	}
	
	Metre operator*(Metre e) {
		Metre temp;
		temp.m = m * e.m;
		return temp;
	}
	
	Metre operator/(Metre e) {
		Metre temp;
		temp.m = m / e.m;
		return temp;
	}
	void static mOperation(Metre m1,Metre m2, char c) {
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
};

class Feet {
	float ft;
	public:
		Feet() {
			ft = 0;
		}
		
		Feet(float val1) {
			ft = val1;
		}
		
	void display() {
		cout << ft << endl;
	}
		
	Feet operator+(Feet m) {
		Feet temp;
		temp.ft = ft + m.ft;
		return temp;
	}
	
	Feet operator-(Feet m) {
		Feet temp;
		temp.ft = ft - m.ft;
		return temp;
	}
	
	Feet operator*(Feet m) {
		Feet temp;
		temp.ft = ft * m.ft;
		return temp;
	}
	
	Feet operator/(Feet m) {
		Feet temp;
		temp.ft = ft / m.ft;
		return temp;
	}
	void static ftOperation(Feet ft1, Feet ft2, char c) {
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
};

class Inch {
	float in;
	public:
		Inch() {
			in = 0;
		}
		
		Inch(float val1) {
			in = val1;
		}
		
	void display() {
		cout << in << endl;
	}
		
	Inch operator+(Inch m) {
		Inch temp;
		temp.in = in + m.in;
		return temp;
	}
		
	Inch operator-(Inch m) {
		Inch temp;
		temp.in = in - m.in;
		return temp;
	}
		
	Inch operator*(Inch m) {
		Inch temp;
		temp.in = in * m.in;
		return temp;
	}
		
	Inch operator/(Inch m) {
		Inch temp;
		temp.in = in / m.in;
		return temp;
	}
	void static inOperation(Inch in1, Inch in2, char c) {
		if(c == '+') {
			Inch in3 = in1 + in2;
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
};

class CentiMetre {
	float cm;
	public:
		CentiMetre() {
			cm = 0;
		}
		
		CentiMetre(float val1) {
			cm = val1;
		}
		
	void display() {
		cout << cm << endl;
	}
		
	CentiMetre operator+(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm + m.cm;
		return temp;
	}
		
	CentiMetre operator-(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm - m.cm;
		return temp;
	}
		
	CentiMetre operator*(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm * m.cm;
		return temp;
	}
		
	CentiMetre operator/(CentiMetre m) {
		CentiMetre temp;
		temp.cm = cm / m.cm;
		return temp;
	}
	void static cmOperation(CentiMetre cm1, CentiMetre cm2, char c) {
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
};

int main() {

	int a, b;
	cout << "Type the appropriate numbers - \n1 for KiloMetre \n2 for Metre \n3 for Feet \n4 for Inch \n5 for CentiMetre \n";
	cin >> a >> b;
	
	char c;
	cout << "Enter the operation you want to perform : ";
	cin >> c;
	
	cout << "Enter the values : ";
	
	if((a==1) && (b==1)) {
		float x, y;
		cin >> x >> y;
		KiloMetre km1(x);
		KiloMetre km2(y);
		KiloMetre::kmOperation(km1, km2, c);
	}
	else if((a==1) && (b==2)) {
		float x, y;
		cin >> x >> y;
		KiloMetre km1(x);
		y = mtokm(y);
		KiloMetre km2(y);
		KiloMetre::kmOperation(km1, km2, c);
	}
	else if((a==1) && (b==3)) {
		float x, y;
		cin >> x >> y;
		KiloMetre km1(x);
		y = fttokm(y);
		KiloMetre km2(y);
		KiloMetre::kmOperation(km1, km2, c);
	}
	else if((a==1) && (b==4)) {
		float x, y;
		cin >> x >> y;
		KiloMetre km1(x);
		y = intokm(y);
		KiloMetre km2(y);
		KiloMetre::kmOperation(km1, km2, c);
	}
	else if((a==1) && (b==5)) {
		float x, y;
		cin >> x >> y;
		KiloMetre km1(x);
		y = cmtokm(y);
		KiloMetre km2(y);
		KiloMetre::kmOperation(km1, km2, c);
	}
	else if((a==2) && (b==2)) {
		float x, y;
		cin >> x >> y;
		Metre m1(x);
		Metre m2(y);
		Metre::mOperation(m1, m2, c);
	}
	else if((a==2) && (b==3)) {
		float x, y;
		cin >> x >> y;
		Metre m1(x);
		y = fttom(y);
		Metre m2(y);
		Metre::mOperation(m1, m2, c);
	}
	else if((a==2) && (b==4)) {
		float x, y;
		cin >> x >> y;
		Metre m1(x);
		y = intom(y);
		Metre m2(y);
		Metre::mOperation(m1, m2, c);
	}
	else if((a==2) && (b==5)) {
		float x, y;
		cin >> x >> y;
		Metre m1(x);
		y = cmtom(y);
		Metre m2(y);
		Metre::mOperation(m1, m2, c);
	}
	else if((a==3) && (b==3)) {
		float x, y;
		cin >> x >> y;
		Feet ft1(x);
		Feet ft2(y);
		Feet::ftOperation(ft1, ft2, c);
	}
	else if((a==3) && (b==4)) {
		float x, y;
		cin >> x >> y;
		Feet ft1(x);
		y = intoft(y);
		Feet ft2(y);
		Feet::ftOperation(ft1, ft2, c);
	}
	else if((a==3) && (b==5)) {
		float x, y;
		cin >> x >> y;
		Feet ft1(x);
		y = cmtoft(y);
		Feet ft2(y);
		Feet::ftOperation(ft1, ft2, c);
	}
	else if((a==4) && (b==4)) {
		float x, y;
		cin >> x >> y;
		Inch in1(x);
		Inch in2(y);
		Inch::inOperation(in1, in2, c);
	}
	else if((a==4) && (b==5)) {
		float x, y;
		cin >> x >> y;
		Inch in1(x);
		y = cmtoin(y);
		Inch in2(y);
		Inch::inOperation(in1, in2, c);
	}
	else if((a==5) && (b==5)) {
		float x, y;
		cin >> x >> y;
		CentiMetre cm1(x);
		CentiMetre cm2(y);
		CentiMetre::cmOperation(cm1, cm2, c);
	}
	return 0;	
}
