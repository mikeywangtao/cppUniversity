#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Overload00.h"

using namespace std;

Overload00::Overload00() {}
Overload00::~Overload00() {}

int Overload00::disSquare(int intNump) {
	cout << "square of integer : " << intNump << ", square is : ";
	return intNump * intNump;
}

double Overload00::disSquare(double douNump) {
	cout << "square of double : " << douNump << ", square is : ";
	return douNump * douNump;
}
