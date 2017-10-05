#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "MulArrayGb00.h"

using namespace std;


MulArrayGb00::MulArrayGb00() {}
MulArrayGb00::~MulArrayGb00() {}

MulArrayGb00::MulArrayGb00(string name, const int gradesArray[][tests]) {
	setCourseName(name);
	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			grades[student][test] = gradesArray[student][test];
		}
	}
}

void MulArrayGb00::setCourseName(string name) {
	courseName = name;
}

std::string MulArrayGb00::getCourseName() {
	return courseName;
}

void MulArrayGb00::displayMessage() {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void MulArrayGb00::processGrades() {
	outputGrades();

	cout << "\nLowest grade in the grade book is " << getMinimum()
		<< "\nHighest grade in the grade book is " << getMaximum() << endl;

	outputBarChart();
}

int MulArrayGb00::getMinimum() {
	int lowGrade = 100;
	for (int student = 0; student < students; student++) {
		for (int test = 0;test < tests; test++) {
			if (grades[student][test] < lowGrade) {
				lowGrade = grades[student][test];
			}
		}
	}
	return lowGrade;
}

int MulArrayGb00::getMaximum() {
	int highGrade = 0;
	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			if (grades[student][test] > highGrade) {
				highGrade = grades[student][test];
			}
		}
	}
	return highGrade;
}

double MulArrayGb00::getAverage(const int setOfGrades[], const int grades) {
	int total = 0;
	for (int grade = 0; grade < grades; grade++) {
		total += setOfGrades[grade];
	}
	return static_cast<double>(total) / grades;
}

void MulArrayGb00::outputBarChart() {
	cout << "\nOverall grade distribution:" << endl;
	const int frequencySize = 11;
	int frequency[frequencySize] = { 0 };

	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			++frequency[grades[student][test]/10];
		}
	}
	for (int count = 0; count < frequencySize; count++) {
		if (count==0) {
			cout << "  0-9: ";
		} else if(count==10) {
			cout << "  100: ";
		} else {
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		}
		for (int stars = 0; stars < frequency[count]; stars++) {
			cout << "*";
		}
		cout << endl;
	}
}

void MulArrayGb00::outputGrades() {
	cout << "\nThe grades are:\n\n";
	cout << "            ";
	for (int test = 0; test < tests; test++) {
		cout << "Test " << test + 1 << "  ";
	}
	cout << "Average" << endl;
	for (int student = 0; student < students; student++) {
		cout << "Student " << setw(2) << student + 1;
		for (int test = 0; test < tests; test++) {
			cout << setw(8) << grades[student][test];
		}
		double average = getAverage(grades[student], tests);
		cout << setw(9) << setprecision(2) << fixed << average << endl;
	}
}

