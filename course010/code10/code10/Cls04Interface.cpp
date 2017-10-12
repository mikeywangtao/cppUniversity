#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls04Interface.h"
#include "Cls04Implementation.h"


Cls04Interface::Cls04Interface(int v):
  ptrCls04Impl(new Cls04Implementaion(v)){

}

Cls04Interface::~Cls04Interface() {
	delete ptrCls04Impl;
	ptrCls04Impl = 0;
}

void Cls04Interface::setValue(int v) {
	ptrCls04Impl->setValue(v);
}

int Cls04Interface::getValue() {
	return ptrCls04Impl->getValue();
}
