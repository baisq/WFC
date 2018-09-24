#pragma once

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
	Rational(int = 0, int = 1);

	Rational operator+(const Rational &) const;
	Rational operator-(const Rational &) const;
	Rational operator*(const Rational &) const;
	Rational operator/(const Rational &) const;
	bool operator==(const Rational &) const;
	bool operator!=(const Rational &) const;
	bool operator<(const Rational &) const;
	bool operator<=(const Rational &) const;
	bool operator>(const Rational &) const;
	bool operator>=(const Rational &) const;

	void printRational();

private:
	int numerator;
	int denominator;
	void reduction();
};

#endif

