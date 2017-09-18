#include "stdafx.h"
#include "Ifelse.h"

#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

Ifelse::Ifelse() {}

Ifelse::~Ifelse() {}

void Ifelse::dis00() {
	int intBase = 40;
	string strOutput = (intBase >= 60) ? "Passed" : "Failed";
	cout << "If Else :: " << strOutput  << endl;
}
