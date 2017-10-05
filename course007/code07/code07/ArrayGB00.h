//#pragma once
#include "string"

using namespace std;

class ArrayGB00 {
public:
	const static int students = 10;
	
	ArrayGB00();
	virtual ~ArrayGB00();

	ArrayGB00(string, const int []);

	void setCoursename(string);
	string getCourseName();
	void displayMessage();
	void processGrades();


private:
	string courseName;
	int grades[students];

	int getMinimum();
	int getMaximum();
	double getAverage();
	void outputBarchart();
	void outputGrades();
};

