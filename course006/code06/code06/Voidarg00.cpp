#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Voidarg00.h"

using namespace std;


Voidarg00::Voidarg00() {}
Voidarg00::~Voidarg00() {}

void Voidarg00::disPlayfun() {
	disVoidfun1();
	disVoidfun2();
}

void Voidarg00::disVoidfun1() {
	cout << "function1 takes no arguments." << endl;
}

void Voidarg00::disVoidfun2(void) {
	cout << "function2 takes void arguments." << endl;
}
