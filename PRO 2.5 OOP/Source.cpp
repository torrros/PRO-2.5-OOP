#include "Rational.h"
#include "Pair.h"
#include <iostream>

using namespace std;

int main()
{
	Rational r1;
	Rational r2;

	cin >> r1;
	cin >> r2;
	
	cout << r1 << " / " << r2 << " = " << r1 / r2 << endl;
	cout << r1 << " - " << r2 << " = " << r1 - r2 << endl;
	cout << r1 << " + " << r2 << " = " << r1 + r2 << endl;
	
	Pair p1, p2;
	cin >> p1;
	cin >> p2;
	
	cout << p1 << " * " << p2 << " = " << p1* p2 << endl;
	cout << p1 << " - " << p2 << " = " << p1 - p2 << endl;
	cout << p1 << " == " << p2 << " = " << (p1 == p2) << endl;
	
	return 0;
	
	
}