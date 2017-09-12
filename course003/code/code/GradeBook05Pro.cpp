#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

#include "GradeBook05.h"

using namespace std;

void dis05() {
	cout << "This is code 04;" << endl;
	cout << endl;

	string strCourseName;
	GradeBook05 objGradeBook05_01("asdjf;alkjsd;flk");
	objGradeBook05_01.displayMessage();

	GradeBook05 objGradeBook05_02("萨里的罚款就·");
	objGradeBook05_02.displayMessage();

	GradeBook05 objGradeBook05_03("asldjf阿斯顿浪费空间啊；l");
	objGradeBook05_03.displayMessage();
}