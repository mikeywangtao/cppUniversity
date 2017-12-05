#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "stdexcept"
#include "exception"

using namespace std;

void throwException() {
	try {
		cout << " Function throwException throws an exception: \n";
		throw exception();
	} catch (exception &) {
		cout << " Exception handled in function throwException "
			<< "\n Function throwException rethrows exception: ";
		throw;
	}
	cout << "This also should not print/n";
}

void disThrowExcept02Pro() {
	try {
		cout << "\nmain invokes function throwException\n";
		throwException();
		cout << "This should not print\n";
	} catch (exception &) {
		cout << "\n\nException handled in main\n";
	}
	cout << "Program control continues after catch in main\n";
}