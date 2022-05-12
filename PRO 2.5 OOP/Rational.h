#pragma once
#include <string>
#include <iostream>
#include "Pair.h"

using namespace std;

class Rational
{
private:
	Pair pair;
public:

	Pair getpair() const { return pair; };
	void setpair(Pair pair) { this->pair = pair; };

	Rational(Pair p = Pair(0, 0));
	Rational(const Rational& p);
	Rational& operator=(const Rational& p);

	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);

	friend Rational operator+ (const Rational& r1, const Rational& r2);
	friend Rational operator- (const Rational& r1, const Rational& r2);
	friend Rational operator/ (const Rational& r1, const Rational& r2);
};

