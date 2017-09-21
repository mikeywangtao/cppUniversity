#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdio"
#include "cstdlib"
#include "string"

#include "Rand02.h"

using namespace std;


Rand02::Rand02() {
	int1 = 0;
	int2 = 0;
	int3 = 0;
	int4 = 0;
	int5 = 0;
	int6 = 0;

	disRand02();
}
Rand02::~Rand02() {}

void Rand02::disRand02() {
	unsigned usSeed;

	cout << "Enter seed: ";
	cin >> usSeed;
	srand(usSeed);

	for (int i = 0; i < 10; i++) {
		cout << setw(10) << (1+rand()%6);
		if (i>0 && i%5==4) {
			cout << endl;
		}
	}
}
