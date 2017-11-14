#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee04.h"
#include "BasePlusCommissionEmployee04.h"

using namespace std;

void disBpce04PRo() {
	cout << fixed << setprecision(2);
	{
		CommissionEmployee04 employee("Bob", "Lewis", "333-33-3333", 5000, 0.04);
	}

	cout << endl;
	BasePlusCommissionEmployee04 employee0401("Lisa", "Jones", "555-55-5555", 2000, 0.06, 800);

	cout << endl;
	BasePlusCommissionEmployee04 employee0402("Mark", "Sands", "888-88-8888", 8000, 0.15, 2000);

	cout << endl;

}