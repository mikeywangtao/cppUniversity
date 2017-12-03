#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.6.4*/
ostream& bell(ostream& output) {
	return output << '\a';
}
ostream& carriageReturn(ostream& output) {
	return output << '\r';
}
ostream& tab(ostream& output) {
	return output << '\t';
}
ostream& endLine(ostream& output) {
	return output << '\n' << flush;
}

void disUserformat09Pro() {
	cout << "Testing the tab manipulator: " << endLine
		<< 'a' << tab << 'b' << tab << 'c' << endLine;

	cout << "Testing the carriageReturn and bell manipulators: "
		<< endLine << "............";

	cout << bell;

	cout << carriageReturn << "+++" << endLine;
}