#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

class GradeBook04 {
public :
	GradeBook04() {}
	~GradeBook04() {}

	GradeBook04(string strCourseNamep) {
		setStrCourseName(strCourseNamep);
	}

	void displayMessage() {
		cout << "Welcome to the grade book for : \n" << strCourseName << endl;
	}

	void setStrCourseName(string strCourseNamep) {
		strCourseName = strCourseNamep;
	}

	std::string getStrCourseName() {
		return strCourseName;
	}


private :
	string strCourseName;
};