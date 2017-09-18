#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

#include "DetAverage00.h"

using namespace std;


DetAverage00::DetAverage00() {}


DetAverage00::~DetAverage00() {}

void DetAverage00::disDetermineClassAverage() {
	int intTotal;
	int intGradeCounter;
	int intGrade;
	int intAverage;

	intTotal = 0;
	intGradeCounter = 0;
	while (intGradeCounter<=10) {
		cout << intGradeCounter << " ---- Enter grade: " << endl;
		cin >> intGrade;
		intTotal = intTotal + intGrade;
		intGradeCounter = intGradeCounter + 1;
	}
	intAverage = intTotal / 10;
	cout << "Total of all 10 grades is :: " << intTotal << endl;
	cout << "Class average is :: " << intAverage << endl;

}
