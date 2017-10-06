#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "vector"

#include "Ptr00.h"

using namespace std;


Ptr00::Ptr00() {}
Ptr00::~Ptr00() {}

void Ptr00::disPtr0000() {
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;

	cout << "The address of a is " << &a
		<< "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a
		<< "\nThe value of *aPtr is " << *aPtr;
	cout << "\n\n&aPtr = " << &aPtr;
	cout << "\n*&aPtr = " << *&aPtr;
	cout << "\n\nShowing that * and & are inverses of each other."
		<< "\n&*aPtr = " << &*aPtr
		<< "\n*&aPtr = " << *&aPtr << endl;
}
