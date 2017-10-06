#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "PtrStr08.h"

using namespace std;


PtrStr08::PtrStr08() {}
PtrStr08::~PtrStr08() {}

void PtrStr08::disPtrstr0800() {
	char x[] = "Happy Birthday to you!";
	char y[30];
	char z[35];

	strcpy(y, x);
	cout << "The string in array x is: " << x
		<< "\nThe string in array y is: " << y << '\n';

	strncpy(z, x, 14);
	z[14] = '\0';
	cout << "The string array z is: " << z << endl;
}

void PtrStr08::disPtrstr0801() {
	char s1[20] = "Happy ";
	char s2[] = "New Year!";
	char s3[50] = "";

	cout << "s1 = " << s1 << "\nS2 = " << s2;

	strcat(s1, s2);
	cout << "\n\nAfter strcat(s1, s2): \n s1 = " << s1 << "\n s2 = " << s2;

	strncat(s3, s1, 6);
	cout << "\n\nAfter strcat(s3, s1, 6): \n s1 = " << s1 << "\n s3 = " << s3;

	strcat(s3, s1);
	cout << "\n\nAfter strcat(s3, s1): \n s1 = " << s1 << "\n s3 = " << s3;

}

void PtrStr08::disPtrstr0802() {
	char *s1 = "Happy New Year";
	char *s2 = "Happy New Year";
	char *s3 = "Happy Holidays!!";

	cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3
		<< "\nstrcmp(s1, s2) = " << setw(2) << strcmp(s1, s2)
		<< "\nstrcmp(s1, s3) = " << setw(2) << strcmp(s1, s3)
		<< "\nstrcmp(s3, s1) = " << setw(2) << strcmp(s3, s1);

	cout << "\n\nstrncmp(s1, s3, 6) = " << setw(2) << strncmp(s1, s3, 6)
		<< "\nstrncmp(s1, s3, 7) = " << setw(2) << strncmp(s1, s3, 7)
		<< "\nstrncmp(s3, s1, 7) = " << setw(2) << strncmp(s3, s1, 7) << endl;
}

void PtrStr08::disPtrstr0803() {
	char sentence[] = "This is a sentence with 7 tokens";
	char *tokenPtr;

	cout << "The string to be tokenized is : \n" << sentence
		<< "\n\nThe tokens are: \n\n";

	tokenPtr = strtok(sentence, " ");

	while (tokenPtr!=NULL) {
		cout << tokenPtr << '\n';
		tokenPtr = strtok(NULL, " ");
	}
	cout << "\nAfter strtok , sentence = " << sentence << endl;

}

void PtrStr08::disPtrstr0804() {
	char *str1 = "alksdjhflasoiweurpoiasdf";
	char *str2 = "four";
	char *str3 = "Boston";

	cout << "The length of ----" << str1 << " is " << strlen(str1) << endl;
	cout << "The length of ----" << str2 << " is " << strlen(str2) << endl;
	cout << "The length of ----" << str3 << " is " << strlen(str3) << endl;

}

