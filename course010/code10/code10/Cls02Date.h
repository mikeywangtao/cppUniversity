//#pragma once
#ifndef Cls02Date_H
#define Cls02Date_H

#include "string"

using namespace std;

class Cls02Date {
public:
	Cls02Date(int mn=1, int dy=1, int yr=1);
	virtual ~Cls02Date();

	void print() const;

private :
	int month;
	int day;
	int year;

	int checkday(int ) const;
};
#endif

