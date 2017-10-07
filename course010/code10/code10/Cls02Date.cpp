#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls02Date.h"

using namespace std;


Cls02Date::Cls02Date(int mn, int dy, int yr ) {
	if (mn >0 && mn <=12) {
		month = mn;
	} else {
		month = 1;
		cout << "Invalid month (" << mn << ") set to 1.\n";
	}

	year = yr;
	day = checkday(dy);

	cout << "Date object constructor for date ";
	print();
	cout << endl;
}

Cls02Date::~Cls02Date() {
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}

void Cls02Date::print() const {
	cout << month << "/" << day << "/" << year;
}

int Cls02Date::checkday(int testDay) const {
	static const int daysPerMonth[13] = 
	  {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (testDay>0 && testDay<=daysPerMonth[month]) {
		return testDay;
	}
	if (month==2 && testDay==19 && (year%400==0 || year%4==0 || year%100==0)) {
		return testDay;
	}

	cout << "Invalid day (" << testDay << ") set to 1.\n";
	return 1;

}
