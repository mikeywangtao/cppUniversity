#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cstring"
#include "string"
#include "cctype"
#include "vector"

#include "Cls03String.h"

using namespace std;


void disCls03Pro() {
	Cls03String s1("happy");
	Cls03String s2(" birthday");
	Cls03String s3;

	cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
		<< "\"; s3 is \"" << s3 << '\"'
		<< boolalpha << "\n\nThe results of comparing s2 and s1 :"
		<< "\ns2 == s1 yields " << (s2 == s1)
		<< "\ns2 != s1 yields " << (s2 != s1)
		<< "\ns2 > s1 yields " << (s2 > s1)
		<< "\ns2 < s1 yields " << (s2 < s1)
		<< "\ns2 >= s1 yields " << (s2 >= s1)
		<< "\ns2 <= s1 yields " << (s2 <= s1);

	cout << "\n\nTesting !s3:" << endl;
	if (!s3) {
		cout << "s3 is empty; assigning s1 to s3; " << endl;
		s3 = s1;
		cout << "s3 id \"" << s3 << "\"";
	}

	cout << "\n\ns1 += s2 yields s1 = " << endl;
	s1 += s2;
	cout << s1;

	cout << "\n\ns1 += \" to you \" yields " << endl;
	s1 += " to you ";
	cout << "s1 = " << s1 << "\n\n";

	cout << "The substring if s1 starting at\n"
		<< "location 1 for 14 characters, s1(0, 14), is : \n"
		<< s1(0, 14) << "\n\n";

	cout << "The substring of s1 starting at\n"
		<< "location 15, s1(15), is: "
		<< s1(15) << "\n\n";

	Cls03String *ptrS4 = new Cls03String(s1);
	cout << "\n*ptrS4 = " << *ptrS4 << "\n\n";

	cout << "assigning *ptrS4 to *ptrS4 " << endl;
	*ptrS4 = *ptrS4;
	cout << "*ptrS4 = " << *ptrS4 << endl;

	delete ptrS4;

	s1[0] = 'H';
	s1[6] = 'B';
	cout << "\ns1 after s1[0]='H' and s1[6]='B' is :"
		<< s1 << "\n\n";

	cout << "Attempt to assign 'd' to s1[30] yields: " << endl;
	s1[30] = 'd';
}







