#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "MulArrayGb00.h"

using namespace std;

void disMularraygb00Pro() {
	int gradesArray[MulArrayGb00::students][MulArrayGb00::tests] = {
		{87,96,70},
		{68,87,90},
	  {94,100,90},
		{100,81,82},
		{83,65,85},
		{78,87,65},
		{85,75,83},
		{91,94,100},
		{76,72,84},
		{87,93,73}
	  };


	MulArrayGb00 objMagb00(
	"CS101 Introduction to C++ Programming", gradesArray);
	objMagb00.displayMessage();
	objMagb00.processGrades();
}