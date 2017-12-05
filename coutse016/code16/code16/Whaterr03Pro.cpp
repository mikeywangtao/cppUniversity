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

void function3() throw (runtime_error) {
	cout << "In function 3" << endl;
	throw runtime_error("runtime_error in function 3");
}

void function2() throw (runtime_error) {
	cout << "function3 is called inside function 2" << endl;
	function3();
}

void function1() throw (runtime_error) {
	cout << "function2 is called inside function 1" << endl;
	function2();
}

void disWhaterr03Pro() {
	try {
		cout << "function1 is called inside main" << endl;
		function1();
	} catch (runtime_error &error) {
		cout << "Exception occurred: " << error.what() << endl;
		cout << "Exception handled in main " << endl;
	}
}
