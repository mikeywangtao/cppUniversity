#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Maxinum00.h"

using namespace std;

Maxinum00::Maxinum00() {}
Maxinum00::~Maxinum00() {}

void Maxinum00::disInputGrades() {
	int intA;
	int intB;
	int intC;

	cout << " Enter three integer grades: " << endl;
	cin >> intA >> intB >> intC;

	intMax = disMaxinum(intA, intB, intC);

}

int Maxinum00::disMaxinum(int intAp, int intBp, int intCp) {
	int intMaxf = intAp;
	if (intBp > intMaxf) {
		intMaxf = intBp;
	}
	if (intCp > intMaxf) {
		intMaxf = intCp;
	}
	return intMaxf;
}

void Maxinum00::disShowmax() {
	cout << "Maxinum of grades entered: " << intMax << endl;
}
