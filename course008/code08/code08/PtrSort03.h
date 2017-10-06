//#pragma once

#include "string"

using namespace std;

class PtrSort03 {
public:
	PtrSort03();
	virtual ~PtrSort03();

	void disPtrsort0300();

private:
	//const int * ----不可变的指针
	//int *const ----不可变变量的指针 
	void selectionSort(int *const, const int);
	void swap(int *const, int *const);
};

