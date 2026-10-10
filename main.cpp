#include <iostream>
#include "sum.h"
#include "dif.h"
#include <cmath>

using namespace std;


int main
{
	int a = 12, b = 23;
	cout << "Hello World" << endl;
	cout << a << " + " << b << " = " << sum(a, b) << endl;
	cout << a << " - " << b << " = " << dif(a, b) << endl;

}