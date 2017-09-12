#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

#include "GradeBook04.cpp"

using namespace std;

void dis04() {

	cout << "This is code 04;" << endl;
	cout << endl;

	string strCourseName;
	GradeBook04 objGradeBook04_01("asdjf;alkjsd;flk");
	objGradeBook04_01.displayMessage();

	GradeBook04 objGradeBook04_02("萨里的罚款就·");
	objGradeBook04_02.displayMessage();

	GradeBook04 objGradeBook04_03("asldjf阿斯顿浪费空间啊；l");
	objGradeBook04_03.displayMessage();

}
