#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Rand01.h"

using namespace std;


Rand01::Rand01() {
	int1 = 0;
	int2 = 0;
	int3 = 0;
	int4 = 0;
	int5 = 0;
	int6 = 0;

	disRand01();
}
Rand01::~Rand01() {}

void Rand01::displayRand() {
	cout << "Face Number" << endl;
	cout << "   1" << setw(15) << int1
		<< "\n   2" << setw(15) << int2
		<< "\n   3" << setw(15) << int3
		<< "\n   4" << setw(15) << int4
		<< "\n   5" << setw(15) << int5
		<< "\n   6" << setw(15) << int6
		<< endl;
}

void Rand01::disRand01() {
	int intFace;
	for (int i = 0; i < 60000000; i++) {
		intFace = 1 + rand() % 6;
		switch (intFace) {
		case 1:
			++int1;
			break;
		case 2:
			++int2;
			break;
		case 3:
			++int3;
			break;
		case 4:
			++int4;
			break;
		case 5:
			++int5;
			break;
		case 6:
			++int6;
			break;
		default:
			cout << "Program should never get here!" << endl;
		}
	}
}
