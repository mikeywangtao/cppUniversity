//#pragma once
#ifndef Cls01PhoneNumber_H
#define Cls01PhoneNumber_H

#include "string"

using namespace std;


class Cls01PhoneNumber {
public:
	Cls01PhoneNumber();
	virtual ~Cls01PhoneNumber();

	friend ostream &operator << (ostream &, const Cls01PhoneNumber &);
	friend istream &operator >> (istream &, Cls01PhoneNumber &);


private:
	string areCode;
	string exchange;
	string line;
};
#endif


