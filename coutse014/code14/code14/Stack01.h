//#pragma once
#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

#ifndef STACK01_H
#define STACK01_H

template<typename T>
class Stack01 {
public:
	Stack01(int =10);
	~Stack01() {
		delete[] stackPtr;
	}

	bool push(const T& );
	bool pop(T& );

	bool isEmpty() const {
		return top == -1;
	}
	bool isFull() const {
		return top == size - 1;
	}

private:
	int size;
	int top;
	T *stackPtr;

};

template<typename T>
Stack01 <T>::Stack01(int s)
  :size(s > 0 ? s : 10), top(-1), stackPtr(new T[size]) {
}

template<typename T>
bool Stack01<T>::push(const T &pushValues) {
	if (!isFull()) {
		stackPtr[++top] = pushValues;
		return true;
	}
	return false;
}

template<typename T>
bool Stack01<T>::pop(T &popValues) {
	if (!isEmpty()) {
		popValues = stackPtr[top--];
		return true;
	}
	return false;
}
#endif
