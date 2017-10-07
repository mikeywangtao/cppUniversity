//#pragma once
#ifndef ClsIncrement01_H
#define ClsIncrement01_H		

#include "string"

using namespace std;

class ClsIncrement01 {
public:
	ClsIncrement01(int c=0, int i=1);
	virtual ~ClsIncrement01();

	void addIncerement() {
		count += increment;
	}
	void print() const;

private :
	int count;
	const int increment;
};

#endif

