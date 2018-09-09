#include<bits/stdc++.h>

using namespace std;

#include "KiloMetre.h"
#include "Metre.h"
#include "Inch.h"
#include "Feet.h"
#include "CentiMetre.h"

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
