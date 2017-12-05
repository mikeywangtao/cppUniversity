#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"
#include "stdexcept"

#include "DivideByZeroException01.h"

using namespace std;

double quotient(int numerator, int denominator) {
	if (denominator==0 ) {
		throw DivideByZeroException01();
	}
	return static_cast<double> (numerator) / denominator;
}

void disDbze01Pro() {
	int number1;
	int number2;
	double result;

	cout << "Enter two integers (end-of-file to end): ";

	while (cin >> number1 >> number2) {
		try {
			result = quotient(number1, number2);
			cout << "The quotient is: " << result << endl;
		} catch (DivideByZeroException01 &divideByZeroException01) {
			cout << "Exception occurred: "
				<< divideByZeroException01.what() << endl;
		}
		cout << "\nEnter two integers (end-of-file to end): ";
	}

	cout << endl;
}