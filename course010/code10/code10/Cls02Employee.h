//#pragma once
#ifndef Cls02Employee_H
#define Cls02Employee_H

#include "string"

#include "Cls02Date.h"

using namespace std;

class Cls02Employee {
public:
	Cls02Employee(const char *const, const char *const, const Cls02Date &, const Cls02Date &);
	virtual ~Cls02Employee();

	void print() const;

private:
	char firstName[25];
	char lastName[25];
	const Cls02Date birtDate;
	const Cls02Date hireDate;
};
#endif

