//#pragma once

#include "string"

using namespace std;

class PtrSort03 {
public:
	PtrSort03();
	virtual ~PtrSort03();

	void disPtrsort0300();

private:
	//const int * ----���ɱ��ָ��
	//int *const ----���ɱ������ָ�� 
	void selectionSort(int *const, const int);
	void swap(int *const, int *const);
};

