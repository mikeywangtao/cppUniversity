#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

#include "GradeBook06.h"

using namespace std;

void dis06() {
	cout << "This is code 04;" << endl;
	cout << endl;

	string strCourseName;
	GradeBook06 objGradeBook06_01("asdjf;alkjsd;flksaldjflajksdla;ksdjlfkj");
	objGradeBook06_01.displayMessage();

	GradeBook06 objGradeBook06_02("����ķ���͡�");
	objGradeBook06_02.displayMessage();

	GradeBook06 objGradeBook06_03("asldjf��˹���˷ѿռ䰡��l");
	objGradeBook06_03.displayMessage();
}