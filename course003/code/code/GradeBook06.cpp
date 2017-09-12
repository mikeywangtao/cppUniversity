#include "stdafx.h"
#include "GradeBook06.h"

#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

GradeBook06::GradeBook06() {}
GradeBook06::~GradeBook06() {}

GradeBook06::GradeBook06(string strCourseNamep) {
	setStrCourseName(strCourseNamep);
}

void GradeBook06::displayMessage() {
	cout << "Welcome to the grade book for : \n" << strCourseName << endl;
}

void GradeBook06::setStrCourseName(string strCourseNamep) {
	if (strCourseNamep.length()<= 25) {
		strCourseName = strCourseNamep;
	}
	if (strCourseNamep.length() > 25) {
		strCourseName = strCourseNamep.substr(0, 25);
		cout << "Name <" << strCourseNamep << "> exceeds maximum lenth (25). " << endl;
	}
}

string GradeBook06::getStrCourseName() {
	return strCourseName;
}
