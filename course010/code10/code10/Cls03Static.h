//#pragma once
#ifndef Cls03Static_H
#define Cls03Static_H

using namespace std;

class Cls03Static {
public:
	Cls03Static();
	virtual ~Cls03Static();

	static int getIntNumber();
	static void setAddIntNumber();
	static void setSubIntNumber();

private:
	static int intNumber;
};
#endif

