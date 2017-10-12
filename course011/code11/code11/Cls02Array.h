//#pragma once
#ifndef Cls02Array_H
#define Cls02Array_H

#include "string"
#include "iostream"

using namespace std;

class Cls02Array {

friend ostream &operator<<(ostream &, const Cls02Array &);
friend istream &operator>>(istream &, Cls02Array &);

public:
	//Cls02Array();
	Cls02Array(int = 10 );
	Cls02Array(const Cls02Array &);
	
	virtual ~Cls02Array();

	int getSize() const;

	const Cls02Array &operator = (const Cls02Array &);
	bool operator == (const Cls02Array &) const;

	bool operator != (const Cls02Array &right) const {
		return !(*this == right);
	}

	int &operator[](int );
	int operator[](int) const;

private:
	int size;
	int *ptr;

};
#endif


