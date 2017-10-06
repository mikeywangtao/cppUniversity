#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "SubPtr05.h"

using namespace std;

SubPtr05::SubPtr05() {}
SubPtr05::~SubPtr05() {}

void SubPtr05::disSubptr0500() {

	disSubptr0501();
	disSubptr0502();
}

void SubPtr05::disSubptr0501() {
	int b[] = {10,20,30,40};
	int *bPtr = b;

	cout << "Array b printed with : \n\nArray subscript notation\n";
	for (int i = 0; i < 4; i++) {
		cout << "b[" << i << "] = " << b[i] << '\n';
	}

	cout << "\nPointer/offset notation where the pointer is the array name\n";
	for (int offset1 = 0; offset1 < 4; offset1++) {
		cout << "*(b+" << offset1 << ") = " << *(b + offset1) << '\n';
	}

	cout << "\nPointer subscript notation\n";
	for (int j = 0; j < 4; j++) {
		cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';
	}

	cout << "\nPointer/offset notation\n";
	for (int offset2 = 0; offset2 < 4; offset2++) {
		cout << "*(bOtr+" << offset2 << ") = " << *(bPtr+offset2) << '\n';
	}

	cout << '\n' << endl;

}

void SubPtr05::disSubptr0502() {
	char string1[10];
	char *string2 = "Hello";
	char string3[20];
	char string4[] = "Good code !";

	disSubptr050201(string1, string2);
	cout << "string1 = " << string1 << endl;

	disSubptr050202(string3, string4);
	cout << "string3 = " << string3 << endl;

	cout << '\n' << endl;
}

void SubPtr05::disSubptr050201(char *s1, const char *s2) {
	for (int i = 0; ((s1[i] = s2[i]) != '\0'); i++);
}

void SubPtr05::disSubptr050202(char *s1, const char *s2) {
	for (; ((*s1=*s2)!='\0'); s1++, s2++);
}
