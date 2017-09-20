#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Dowhile00.h"

using namespace std;

Dowhile00::Dowhile00() {}
Dowhile00::~Dowhile00() {}

void Dowhile00::disDowhile0000() {
	cout << "do while 1~10 output." << endl;

	int intCounter = 1;
	do {
		cout << intCounter << " \\  ";
		intCounter++;
	} while (intCounter<=10);
	cout << endl;
	cout << endl;
}
