//#pragma once			 
#ifndef Cls04Date_H
#define Cls04Date_H

#include "iostream"
#include "string"

using namespace std;

class Cls04Date {

	friend ostream &operator<<(ostream &, const Cls04Date & );

public:
	Cls04Date(int m=1, int d=1, int y=1900 );
	virtual ~Cls04Date();

	void setDate(int, int, int );
	Cls04Date &operator++();
	Cls04Date operator++(int );
	const Cls04Date &operator+=(int );
	bool leapYear(int ) const;
	bool endOfMonth(int ) const;


private:
	int month;
	int day;
	int year;

	static const int days[];
	void helpIncrement();
};

#endif

