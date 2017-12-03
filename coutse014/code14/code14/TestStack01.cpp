#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "Stack01.h"

using namespace std;

template<typename T>
void disTestStack01(
	Stack01<T> &theStack
	, T value
	, T increment
	, const string stackName) {
	cout << "\nPushing elements onto " << stackName << '\n';

	while (theStack.push(value)) {
		cout << value << ' ';
		value += increment;
	}

	cout << "\nStack is full, Cannot push" << value
		<< "\n\nPopping elements from " << stackName << '\n';

	while (theStack.pop(value)) {
		cout << value << ' ';
	}

	cout << "\nStack is empty, Cannot pop " << endl;
}

