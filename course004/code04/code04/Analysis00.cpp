#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"
#include "iomanip"

#include "Analysis00.h"

using namespace std;


Analysis00::Analysis00() {}
Analysis00::~Analysis00() {}

void Analysis00::disProcessExamResults() {
	int intPasses = 0;
	int intFailures = 0;
	int intStudentCounter = 0;
	int intResult;

	while (intStudentCounter <= 10) {
		cout << "student counter : " << setw(2) << setfill('0') << right << intStudentCounter << "  Enter result (1=pass, 2=fail) : " ;
		cin >> intResult;

		if (intResult == 1) {
			intPasses = intPasses + 1;
		} else{
			intFailures = intFailures + 1;
		}
		intStudentCounter = intStudentCounter + 1;

	}
	cout << " Passed : " << intPasses << "\n Failed : " << intFailures << endl;

	if (intPasses > 8) {
		cout << "Raise tuition. " << endl;
	}
}
