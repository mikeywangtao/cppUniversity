// code06.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

using namespace std;

//extern void disMaxinum00Pro();
//extern void disRand00Pro();
//extern void disRand01Pro();
//extern void disRand02Pro();
//extern void disDice00Pro();
//extern void disVoidarg00Pro();
//extern void disInlinefun00Pro();
//extern void disArgs00Pro();
//extern void disArgs01Pro();
//extern void disArgs02Pro();
extern void disArgs03Pro();
extern void disArgs99Pro();

int intNumber = 45;
int main()
{
	cout << "This is code 06; " << endl;
	cout << endl;

	//disMaxinum00Pro();
	//disRand00Pro();
	//disRand01Pro();
	//disRand02Pro();
	//disDice00Pro();
	//disVoidarg00Pro();
	//disInlinefun00Pro();
	//disArgs00Pro();
	//disArgs01Pro();
	//disArgs02Pro();
	disArgs03Pro();
	disArgs99Pro();

	cout << endl;
	system("pause");
    return 0;
}

void disArgs99Pro() {
	int intNumber = 39;

	cout << "Local value : " << intNumber
		<< "\nGlobal value : " << ::intNumber << endl;
}

