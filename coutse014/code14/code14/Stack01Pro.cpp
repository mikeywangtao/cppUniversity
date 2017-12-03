#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 使用templat函数执行*/
#include "TestStack01.cpp"
void disStack01Pro() {
	Stack01<double> doubleStack01(5);
	Stack01<int> intStack01;

	disTestStack01(doubleStack01, 1.1, 1.1, "doubleStack01");
	disTestStack01(intStack01, 1, 1, "intStack01");
}

/* 手工编写执行函数 */
//#include "Stack01.h"
//void disStack01Pro() {
//	Stack01<double> doubleStack01(5);
//	double doubleValue = 1.1;
//
//	cout << "Pushing elements onto doubleStack:\n ";
//	while (doubleStack01.push(doubleValue)) {
//		cout << doubleValue << ' ';
//		doubleValue += 1.1;
//	}
//
//	cout << "\nStack is full. Cannot push " << doubleValue 
//		<< "\n\nPopping elements from doubleStack\n";
//
//	while (doubleStack01.pop(doubleValue)) {
//		cout << doubleValue << ' ';
//	}
//
//	cout << "\nStack is empty. Cannot pop\n";
//	Stack01<int> intSatck01;
//	int intVlaue = 1;
//	cout << "\nPushing elements onto intStack\n";
//	while (intSatck01.push(intVlaue)) {
//		cout << intVlaue << ' ';
//		intVlaue++;
//	}
//
//	cout << "\nStack is full, Cannot push " << intVlaue 
//		<< "\n\nPopping elements from intStack\n ";
//	while (intSatck01.pop(intVlaue)) {
//		cout << intVlaue << ' ';
//	}
//	cout << "\nStack is empty. Cannot pop. " << endl;
//}