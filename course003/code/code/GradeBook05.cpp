#include "stdafx.h"
#include "GradeBook05.h"

#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

GradeBook05::GradeBook05() {}
GradeBook05::~GradeBook05() {}

GradeBook05::GradeBook05(string strCourseNamep) {
	setStrCourseName(strCourseNamep);
}

void GradeBook05::displayMessage() {
	cout << "Welcome to the grade book for : \n" << strCourseName << endl;
}

void GradeBook05::setStrCourseName(string strCourseNamep) {
	strCourseName = strCourseNamep;
}

string GradeBook05::getStrCourseName() {
	return strCourseName;
}

