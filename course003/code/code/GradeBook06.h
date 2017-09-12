#pragma once
#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

class GradeBook06 {
public :
	GradeBook06();
	virtual ~GradeBook06();
	GradeBook06(string strCourseNamep);

	void displayMessage();
	void setStrCourseName(string strCourseNamep);
	string getStrCourseName();

private:
	string strCourseName;

};

