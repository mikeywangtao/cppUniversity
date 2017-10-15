#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstring"
#include "string"
#include "cctype"
#include "vector"

#include "Cls04Date.h"

using namespace std;

void disCls04DatePro() {
	Cls04Date d1;
	Cls04Date d2(12, 27, 1992);
	Cls04Date d3(0, 99, 8045);

	cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nde is " << d3;
	cout << "\n(d2 =+7) is" << (d2 +=7);

	d3.setDate(2, 28, 1992);
	cout << "\n\n d3 is " << d3;
	cout << "\n(++d3) is " << ++d3 << " (leap year allows 29th)";

	Cls04Date d4(7, 13, 2002);
	cout << "\n\nTesting the prefix increment operator:\n"
		<< " d4 is " << d4 << endl;
	cout << "(++d4) is " << ++d4 << endl;
	cout << "  d4 is " << d4;

	cout << "\n\nTesting the postfix increment operator:\n"
		<< " d4 is " << d4 << endl;
	cout << "(d4++) is " << d4++ << endl;
	cout << "  d4 is " << d4 << endl;

}