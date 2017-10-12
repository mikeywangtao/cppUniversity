//#pragma once
#ifndef Cls03Employee_H
#define Cls03Employee_H

#include "string"
#include "Cls03Static.h"

using namespace std;


class Cls03Employee {
public:
	Cls03Employee(const char *const, const char *const);
	virtual ~Cls03Employee();

	char *getFirstName();
	char *getLastName();


private:
	char *firstName;
	char *lastName;
	Cls03Static objCls03static;
};
#endif


