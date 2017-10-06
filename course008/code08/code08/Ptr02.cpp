#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "vector"
#include "cctype"

#include "Ptr02.h"

using namespace std;

Ptr02::Ptr02() {}
Ptr02::~Ptr02() {}

void Ptr02::disPtr0200() {
	char subChr01[] = "characters and $32.98.";

	cout << "The phrase before conversion is : " << subChr01;
	disPtr0201(subChr01);
	cout << "\nFun01 The phrase after conversion is : " << subChr01 << endl;

	const char subChr02[] = "print characters of a string.";
	cout << "\nThe print string is : \n";
	disPtr0202(subChr02);
}

void Ptr02::disPtr0201(char *subCharPtrp) {
	cout << endl;
	while (*subCharPtrp!='\0') {
		if (islower(*subCharPtrp)) {
			cout << "1 £º " << *subCharPtrp;
			*subCharPtrp = toupper(*subCharPtrp);
			cout << "2 £º " << *subCharPtrp;
		}
		cout << " ////3 £º " << subCharPtrp;
		subCharPtrp++;
		cout << "//4 £º " << subCharPtrp;
		cout << endl;
	}
}

void Ptr02::disPtr0202(const char *subCharPtrp) {
	for (; *subCharPtrp != '\0'; subCharPtrp++) {
		cout << *subCharPtrp;
	}
}

