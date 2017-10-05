#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "ArrayGB00.h"

using namespace std;

void disArrayGB00Pro() {
	int gradesArray[ArrayGB00::students] = 
	  {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
	ArrayGB00 objAgb00(
	  "CS101 Introduction to C++ Programming", gradesArray);
	objAgb00.displayMessage();
	objAgb00.processGrades();
	
}