#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;

class GradeBook03 {
public:
	GradeBook03() {}
	~GradeBook03() {}

	void displayMessage() {
		cout << "Welcome to the grade book for \n" << strCourseName << endl;
	}

	void setStrCourseName(string strCourseNamep) {
		strCourseName = strCourseNamep;
	}

	std::string getStrCourseName() {
		return strCourseName;
	}
private:
	string strCourseName;
};
