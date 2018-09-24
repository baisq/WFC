// cppTest.cpp : 定义控制台应用程序的入口点。
//


#include <ratio>
#include <iostream>

#include "Rational.h"
#include <iostream> 
using namespace std;

int rationalTest()
{
	Rational c(1000, 21999), x;
	Rational d = c;
	c.printRational();
	cout << " + ";
	d.printRational();
	cout << " = ";
	x = c + d;
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " - ";
	d.printRational();
	cout << " = ";
	x = c - d;
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " * ";
	d.printRational();
	cout << " = ";
	x = c * d;
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " / ";
	d.printRational();
	cout << " = ";
	x = c / d;
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " is:\n";

	cout << ((c > d) ? "  > " : "  <= ");
	d.printRational();
	cout << " according to the overloaded > operator\n";

	cout << ((c < d) ? "  < " : "  >= ");
	d.printRational();
	cout << " according to the overloaded < operator\n";

	cout << ((c >= d) ? "  >= " : "  < ");
	d.printRational();
	cout << " according to the overloaded >= operator\n";

	cout << ((c <= d) ? "  <= " : "  > ");
	d.printRational();
	cout << " according to the overloaded <= operator\n";

	cout << ((c == d) ? "  == " : "  != ");
	d.printRational();
	cout << " according to the overloaded == operator\n";

	cout << ((c != d) ? "  != " : "  == ");
	d.printRational();
	cout << " according to the overloaded != operator" << endl;

	return 0;
}

