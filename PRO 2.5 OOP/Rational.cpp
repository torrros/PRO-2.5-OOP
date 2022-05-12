
#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

Rational::Rational(Pair p)
{
	setpair(p);
}

Rational::Rational(const Rational& p)
{
	*this = p;
}

Rational& Rational::operator=(const Rational& p)
{
	pair = p.pair;
	return *this;
}

Rational::operator string() const
{
	stringstream ss;
	ss << pair.geta() << "/" << pair.getb();
	return ss.str();
}

ostream& operator<<(ostream& out, const Rational& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, Rational& r)
{
	int a, b;
	cout << "a - "; cin >> a;
	cout << "b - "; cin >> b;
	r.pair = { a, b };
	return in;
}

Rational operator+ (const Rational& r1, const Rational& r2)
{
	return Rational({ r1.pair.geta() * r2.pair.getb() + r1.pair.getb() * r2.pair.geta(), r1.pair.getb() * r2.pair.getb() });
}

Rational operator- (const Rational& r1, const Rational& r2)
{
	return Rational({ r1.pair.geta() * r2.pair.getb() - r1.pair.getb() * r2.pair.geta(), r1.pair.getb() * r2.pair.getb() });
}

Rational operator/	(const Rational& r1, const Rational& r2)
{
	return Rational({ r1.pair.geta() * r2.pair.getb(), r1.pair.getb() * r2.pair.geta() });
}