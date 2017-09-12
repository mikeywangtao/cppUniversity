#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

#include "GradeBook03.cpp"

using namespace std;

void dis03() {
	
	string strCourseName;
	GradeBook03 objGradeBook03;	

	cout << "Please enter the course name: \n" << endl;
	getline(cin, strCourseName);
	cout << endl;

	objGradeBook03.setStrCourseName(strCourseName);
	objGradeBook03.displayMessage();

}