#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/*15.3.1*/
void disChar01Pro() {
	char *word = "again";

	cout << "Value of word is : " << word << endl
		<< "Value of static_cast< void * >(word) is: "
		<< static_cast< void * >(word) << endl;
}