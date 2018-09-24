#include "Rational.h"

// Rational.cpp

#include <iostream>
using namespace std;

Rational::Rational(int n, int d) {
	numerator = n;
	denominator = d;
	reduction();
}

Rational Rational::operator+(const Rational &a) const {
	Rational t;
	t.numerator = a.numerator * denominator;
	t.numerator += a.denominator * numerator;
	t.denominator = a.denominator * denominator;
	t.reduction();
	return t;
}

Rational Rational::operator-(const Rational &s) const {
	Rational t;
	t.numerator = s.denominator * numerator;
	t.numerator -= denominator * s.numerator;
	t.denominator = s.denominator * denominator;
	t.reduction();
	return t;
}

Rational Rational::operator*(const Rational &m) const {
	Rational t;
	t.numerator = m.numerator * numerator;
	t.denominator = m.denominator * denominator;
	t.reduction();
	return t;
}

Rational Rational::operator/(const Rational &v) const {
	Rational t;
	t.numerator = v.denominator * numerator;
	t.denominator = denominator * v.numerator;
	t.reduction();
	return t;
}

bool Rational::operator==(const Rational &a) const {
	if (numerator == a.numerator && denominator == a.denominator)
		return true;
	else
		return false;
}

bool Rational::operator!=(const Rational &b) const {
	if (numerator != b.numerator || denominator != b.denominator)
		return true;
	else
		return false;
}

bool Rational::operator<(const Rational &c) const {
	if (numerator / denominator < c.numerator / c.denominator)
		return true;
	else
		return false;

}

bool Rational::operator<=(const Rational &d) const {
	if (numerator / denominator <= d.numerator / d.denominator)
		return true;
	else
		return false;
}

bool Rational::operator>(const Rational &e) const {
	if (numerator / denominator > e.numerator / e.denominator)
		return true;
	else
		return false;
}

bool Rational::operator>=(const Rational &f) const {
	if (numerator / denominator >= f.numerator / f.denominator)
		return true;
	else
		return false;
}

void Rational::printRational() {
	if (denominator == 0)
		cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
	else if (numerator == 0)
		cout << 0;
	else
		cout << numerator << '/' << denominator;
}

void Rational::reduction() {
	int largest;
	largest = numerator > denominator ? numerator : denominator;

	int gcd = 0;

	for (int loop = 2; loop <= largest; loop++)
		if (numerator % loop == 0 && denominator % loop == 0)
			gcd = loop;

	if (gcd != 0) {
		numerator /= gcd;
		denominator /= gcd;
	}
}

