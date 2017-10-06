//#pragma once
#include "string"

using namespace std;

class Ptrsort06 {
public:
	Ptrsort06();
	virtual ~Ptrsort06();

	void disPtrsort0600();

private :
	void selectionSort(int [], const int, bool (*)(int, int));
	void swap(int *const, int *const);

};

