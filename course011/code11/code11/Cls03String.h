//#pragma once
#ifndef Cls03String_H
#define Cls03String_H

#include "string"
#include "iostream"

using namespace std;


class Cls03String {

	friend ostream &operator<<(ostream &, const Cls03String &);
	friend istream &operator>>(istream &, Cls03String &);

public:
	Cls03String(const char * = "");
	Cls03String(const Cls03String &);
	virtual ~Cls03String();

	const Cls03String &operator=(const Cls03String &);
	const Cls03String &operator+=(const Cls03String &);

	bool operator!() const;
	bool operator==(const Cls03String &) const;
	bool operator<(const Cls03String &) const;

	bool operator!=(const Cls03String &right) const {
		return !(*this == right);
	}
	bool operator>(const Cls03String &right) const {
		return right < *this;
	}
	bool operator<=(const Cls03String &right) const {
		return !(right < *this);
	}
	bool operator>=(const Cls03String &right) const {
		return !(*this < right);
	}

	char &operator[](int );
	char operator[](int ) const;
	Cls03String operator()(int, int = 0) const;
	int getLength() const;


private:
	int length;
	char *ptrThis;

	void setString(const char *);
};
#endif


