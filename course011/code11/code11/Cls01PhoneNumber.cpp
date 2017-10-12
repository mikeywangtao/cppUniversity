#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls01PhoneNumber.h"

using namespace std;


Cls01PhoneNumber::Cls01PhoneNumber() {}
Cls01PhoneNumber::~Cls01PhoneNumber() {}

ostream &operator << (ostream &output, const Cls01PhoneNumber &number) {
	output << "(" << number.areCode << ")" 
		<< number.exchange << "-" << number.line;
	return output;
}

istream &operator >> (istream &input, Cls01PhoneNumber &number) {
	input.ignore();
	input >> setw(3) >> number.areCode;
	input.ignore(2);
	input >> setw(3) >> number.exchange;
	input.ignore();
	input >> setw(4) >> number.line;
	return input;
}
