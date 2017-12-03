#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "Employee03.h"
#include "SalariedEmployee03.h"
#include "HourlyEmployee03.h"
#include  "CommissionEmployee03.h"
#include "BasePlusCommissionEmployee03.h"

using namespace std;

void virtualViaPointer(const Employee03 *const );
void virtualViareference(const Employee03 &);