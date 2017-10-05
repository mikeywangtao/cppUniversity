#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "ArrayGB00.h"

using namespace std;


ArrayGB00::ArrayGB00() {}
ArrayGB00::~ArrayGB00() {}

ArrayGB00::ArrayGB00(string name, const int gradesArray[]) {
	setCoursename(name);
	for (int grade = 0; grade < students; grade++) {
		grades[grade] = gradesArray[grade];
	}
}

void ArrayGB00::setCoursename(string name) {
	courseName = name;
}

std::string ArrayGB00::getCourseName() {
	return courseName;
}

void ArrayGB00::displayMessage() {
	cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}

void ArrayGB00::processGrades() {
	outputGrades();

	cout << "\nClass average is " << setprecision(2) << fixed << getMaximum() << endl;

	outputBarchart();
}

int ArrayGB00::getMinimum() {
	int lowGrade = 100;
	for (int grade = 0; grade < students; grade++) {
		if (grades[grade]<lowGrade) {
			lowGrade = grades[grade];
		}
	}
	return lowGrade;
}

int ArrayGB00::getMaximum() {
	int highGrade = 0;
	for (int grade = 0; grade < students; grade++) {
		if (grades[grade]>highGrade) {
			highGrade = grades[grade];
		}
	}
	return highGrade;
}

double ArrayGB00::getAverage() {
	int total = 0;
	for (int grade = 0; grade < students; grade++) {
		total += grades[grade];
	}
	return static_cast<double>(total) / students;
}

void ArrayGB00::outputBarchart() {
	cout << "\nGrade distribution: " << endl;
	const int frequencySize = 11;
	int frequency[frequencySize] = { 0 };
	for (int grade = 0; grade < students; grade++) {
		frequency[grades[grade] / 10]++;
	}
	for (int count = 0; count < frequencySize; count++) {
		if (count==0) {
			cout << "  0-9: ";
		} else if (count==10) {
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

void ArrayGB00::outputGrades() {
	cout << "\nThe grades are:\n\n";
	for (int student = 0; student < students; student++) {
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
	}
}

