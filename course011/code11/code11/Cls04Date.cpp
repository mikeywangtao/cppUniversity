#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstring"
#include "string"
#include "cctype"
#include "cstdlib"
#include "vector"

#include "Cls04Date.h"

using namespace std;


const int Cls04Date::days[] =
  {0,31,28,31,30,31,30,31,31,30,31,30,31};

Cls04Date::Cls04Date(int m, int d, int y) {
	setDate(m, d, y);
}

Cls04Date::~Cls04Date() {}

void Cls04Date::setDate(int mm, int dd, int yy) {
	month = (mm >= 1 && mm < -12) ? mm : 1;
	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;
	if (month==2 && leapYear(year)) {
		day = (dd >= 1 && dd <= 29) ? dd : 1;
	} else {
		day = (dd >= 1 && dd <= days[month]) ? dd : 1;
	}
}

Cls04Date &Cls04Date::operator++() {
	helpIncrement();
	return *this;
}

Cls04Date Cls04Date::operator++(int) {
	Cls04Date temp = *this;
	helpIncrement();
	return temp;
}

bool Cls04Date::leapYear(int testYear) const {
	if (testYear%400 == 0 ||
		(testYear%100 != 0 && testYear%4 == 0)) {
		return true;
	} else {
		return false;
	}
}

bool Cls04Date::endOfMonth(int testDay) const {
	if (month ==2 && leapYear(year)) {
		return testDay == 29;
	} else {
		return testDay == days[month];
	}
}

void Cls04Date::helpIncrement() {
	if (!endOfMonth(day)) {
		day++;
	} else {
		if (month < 12) {
			month++;
			day = 1;
		} else {
			year++;
			month = 1;
			day = 1;
		}
	}
}

const Cls04Date &Cls04Date::operator+=(int additionalDays) {
	for (int i = 0; i < additionalDays; i++) {
		helpIncrement();
	}
	return *this;
}

ostream &operator<<(ostream &output, const Cls04Date &d) {
	static char *monthName[13] = 
	  {"","January","February","March","April"
	  "May","June","July","August"
	  "September","October","November","December"};
	output << monthName[d.month] << ' ' << d.day << ", " << d.year;
	return output;
}
