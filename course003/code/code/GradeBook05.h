#pragma once
#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

class GradeBook05 {
public:
	GradeBook05();
	virtual ~GradeBook05();

	GradeBook05(string strCourseNamep);

	void displayMessage();
	void setStrCourseName(string strCourseNamep);
	string getStrCourseName();

private:
	string strCourseName;
};

