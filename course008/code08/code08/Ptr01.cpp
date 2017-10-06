#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "vector"

#include "Ptr01.h"

using namespace std;


Ptr01::Ptr01() {}
Ptr01::~Ptr01() {}

void Ptr01::disPtr0102() {
	int intNumberf = 0;
  
	intNumberf = 5;
	cout << "The original value of number is " << intNumberf;
	intNumberf = disPtr0100(intNumberf);
	cout << "\nNumberCalc The new value of number is ---- " << intNumberf << endl;

	intNumberf = 6;
	cout << "The original value of number is " << intNumberf;
	disPtr0101(&intNumberf);
	cout << "\nPtrCalc The new value of number is ---- " << intNumberf << endl;

}

int Ptr01::disPtr0100(int intNp) {
	return intNp*intNp*intNp;
}

void Ptr01::disPtr0101(int *intNPtrp) {
	*intNPtrp = *intNPtrp * *intNPtrp * *intNPtrp;
}
