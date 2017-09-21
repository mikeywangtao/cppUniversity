#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Rand00.h"

using namespace std;

Rand00::Rand00() {}
Rand00::~Rand00() {}

void Rand00::disRand00() {
	for (int i = 0; i < 20; i++) {
		cout << "RandNum :  " << i << " ----  " << setw(10) << (1+rand()%6) << endl;
	}
}
