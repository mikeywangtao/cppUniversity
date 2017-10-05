//#pragma once
#include "string"

using namespace std;

class MulArrayGb00 {
public:
	const static int students = 10;
	const static int tests = 3;

	MulArrayGb00();
	virtual ~MulArrayGb00();

	MulArrayGb00(string, const int [][tests]);

	void setCourseName(string);
	string getCourseName();
	void displayMessage();
	void processGrades();


private:
	string courseName;
	int grades[students][tests];

	int getMinimum();
	int getMaximum();
	double getAverage(const int[], const int);
	void outputBarChart();
	void outputGrades();
};

