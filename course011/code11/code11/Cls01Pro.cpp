#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls01PhoneNumber.h"

using namespace std;


void disCls01Pro() {
	Cls01PhoneNumber objCls01;
	
	cout << "Enter phone number in the form (123) 456-7890: " << endl;
	cin >> objCls01;

	cout << "The phone number entered was: ";
	cout << objCls01 << endl;
}