#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Switch00.h"

using namespace std;


Switch00::Switch00() {
	intA = 0;
	intB = 0;
	intC = 0;
	intD = 0;
	intF = 0;
}
Switch00::~Switch00() {}

void Switch00::disImputFrades() {
	int intGrade;
	cout << "Enter the letter grades." << endl
		<< "  Enter the EOF character to end input." << endl;

	while ((intGrade = cin.get())!= EOF) { //	 intGrade = cin.get()部分必须在括号内。 否则会异常（先判断后赋值）。
		switch (intGrade) {
		case 'A':
		case 'a':
			intA++;
			break;
		case 'B':
		case 'b':
			intB++;
			break;
		case 'C':
		case 'c':
			intC++;
			break;
		case 'D':
		case 'd':
			intD++;
			break;
		case 'F':
		case 'f':
			intF++;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			cout << "Incorrect letter grade entered. Enter a new grade. " << endl;
			break;
		}
	}
}

void Switch00::disGradeReport() {
	cout << "\nNuber of students who received each letter grade:"
		<< "\nA : " << intA
		<< "\nB : " << intB
		<< "\nC : " << intC
		<< "\nD : " << intD
		<< "\nF : " << intF
		<< endl;
}
