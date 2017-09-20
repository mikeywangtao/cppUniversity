#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "cmath"

#include "For00.h"

using namespace std;

For00::For00() {}
For00::~For00() {}

void For00::disFor0000() {
	cout << "for 1~10 +1 output. " << endl;
	for (int intCounter = 1; intCounter <= 10; intCounter++) {
		cout << intCounter << " \\  ";
	}
	cout << endl;
	cout << endl;
}

void For00::disFor0001() {
	cout << "for 10~1 -1 output." << endl;
	for (int intCounter = 10; intCounter >= 0; intCounter--) {
		cout << intCounter << " \\  ";
	}
	cout << endl;
	cout << endl;
}

void For00::disFor0002() {
	cout << "for 7~77 +7 output." << endl;
	for (int i = 7; i <= 77; i+=7) {
		cout << i << " \\  ";
	}
	cout << endl;
	cout << endl;
}

void For00::disFor0003() {
	cout << "for output 2/5/8/11/14/17/20" << endl;
	for (int i = 2; i <= 20; i+=3) {
		cout << i << "  \\   ";
	}
	cout << endl;
	cout << endl;
}

void For00::disFor0004() {
	cout << "2~20 内偶数和." << endl;
	int intTotal = 0; 
	for (int i = 2; i <= 20; i+=2) {
		intTotal += i;
	}
	cout << "Sum is : " << intTotal << endl;
	cout << endl;
	cout << endl;
}

void For00::disFor0005() {
	cout << "计算复利." << endl;
	double douAmount;
	double douPrincipal = 10000.0;
	double douRate = 0.05;
	for (int intY = 1; intY <= 10; intY++) {
		douAmount = douPrincipal * pow(1.0 + douRate, intY);
		cout << setw(4) << intY << setw(21) << douAmount << endl;
	}
	cout << endl;
	cout << endl;
}
