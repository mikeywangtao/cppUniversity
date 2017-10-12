#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls04Interface.h"

using namespace std;

void disCls04Pro() {
	Cls04Interface i(5);

	cout << "Interface contains : " << i.getValue()
		<< " Before setValue." << endl;

	i.setValue(3);
	cout << "\nInterface contains: " << i.getValue()
		<< " after setValue." << endl;

}