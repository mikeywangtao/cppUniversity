#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstring"
#include "string"
#include "cctype"
#include "cstdlib"
#include "vector"

#include "Cls03String.h"

using namespace std;


Cls03String::Cls03String(const char *s)
 : length((s!=0)? strlen(s):0){
	cout << "Conversion (and default ) constructor:  " << s << endl;
	setString(s);
}

Cls03String::Cls03String(const Cls03String &copy)
 : length(copy.length) {
	cout << "Copy constructor: " << copy.ptrThis << endl;
	setString(copy.ptrThis);
}

Cls03String::~Cls03String() {
	cout << "Destructor: " << ptrThis << endl;
	delete[]ptrThis;
	//ptrThis = 0;
}

bool Cls03String::operator!() const {
	return length == 0;
}

bool Cls03String::operator<(const Cls03String &right) const {
	return strcmp(ptrThis, right.ptrThis) < 0;
}

char & Cls03String::operator[](int subscript) {
	if (subscript<0 || subscript>=length) {
		cerr << "Error: subscript " << subscript
			<< " out of range. " << endl;
		system("pause");
		exit(1);
	}
	return ptrThis[subscript];
}

char Cls03String::operator[](int subscript) const {
	if (subscript<0 || subscript>=length) {
		cerr << "Error: subscript " << subscript
			<< " out of range. " << endl;
		system("pause");
		exit(1);
	}
	return ptrThis[subscript];
}

bool Cls03String::operator==(const Cls03String &right) const {
	return strcmp(ptrThis, right.ptrThis) == 0;
}

Cls03String Cls03String::operator()(int index, int subLength) const {
	if (index<0 || index>=length || subLength<0) {
		return "";
	}

	int len;
	if ((subLength==0) || (index+subLength>length)) {
		len = length - index;
	} else {
		len = subLength;
	}

	char *ptrTemp = new char[len + 1];
	strncpy(ptrTemp, &ptrThis[index], len);
	ptrTemp[len] = '\0';

	Cls03String tempString(ptrTemp);
	delete[]ptrTemp;
	return tempString;

}

int Cls03String::getLength() const {
	return length;
}

void Cls03String::setString(const char *string2) {
	ptrThis = new char[length + 1];
	if (string2 != 0) {
		strcpy(ptrThis, string2);
	} else {
		ptrThis[0] = '\0';
	}

}

const Cls03String & Cls03String::operator+=(const Cls03String &right) {
	size_t newLength = length + right.length;
	char *ptrTemp = new char[newLength+1];

	strcpy(ptrTemp, ptrThis);
	strcpy(ptrTemp + length, right.ptrThis);

	delete[]ptrThis;
	ptrThis = ptrTemp;
	length = newLength;
	return *this;
}

const Cls03String & Cls03String::operator=(const Cls03String &right) {
	cout << "operator= called " << endl;
	if (&right != this) {
		delete[]ptrThis;
		length = right.length;
		setString(right.ptrThis);
	} else {
		cout << "Attempted assignment of a string to itself " << endl;
	}
	return *this;
}

ostream &operator<<(ostream &output, const Cls03String &s) {
	output << s.ptrThis;
	return output;
}
istream &operator >> (istream &input, Cls03String &s) {
	char temp[100];
	input >> setw(100) >> temp;
	s = temp;
	return input;
}
