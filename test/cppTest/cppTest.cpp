// cppTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <ratio>
#include <iostream>
#include <chrono>
#include "..\..\classes\Rational.h"
#include "..\..\classes\SysTimer.h"

int rationalTest();
int sysTimerTest();

using namespace std;

void GetRatio(int m, int n)
{
	
}
int main()
{
	typedef chrono::duration<double,std::ratio<24,1001> > fps23d976;
	typedef chrono::duration<double,std::ratio<30,1000> > fps30;
	typedef chrono::duration<double, std::ratio<60, 1000> > fps60;
	typedef chrono::duration<double, std::ratio<25,1000> > fps25;
	typedef chrono::duration<double, std::ratio<30, 1001> > fps29d97;
	int n = 1 * 999 * 31;
	std::ratio<24, 1001> rsp;

	fps30 d(n);
	fps23d976 e = chrono::duration_cast<fps23d976>(d);
	fps25 f = chrono::duration_cast<fps25>(e);
	fps29d97 g= chrono::duration_cast<fps29d97>(f);
	fps30 p = chrono::duration_cast<fps30>(g);
	cout << "d cout : " << d.count() << endl;
	cout << "e cout : " << e.count() << endl;
	cout << "f cout : " << f.count() << endl;
	cout << "g cout : " << g.count() << endl;
	cout << "p cout : " << p.count() << endl;
	//sysTimerTest();
	//getchar();

	Rational rat30(30,1000);
	Rational rat23d976(24, 1000);
	Rational rat25(25, 1000);
	Rational rat29d97(30, 1000);

	SysTimer tm;
	Rational dd(n,1);
	Rational ee = dd * rat30 / rat23d976;
	Rational ff = ee * rat23d976 / rat25;
	Rational gg = ff * rat25 / rat29d97;
	Rational pp = gg * rat29d97 / rat30;

	cout << endl;
	cout << "time:" << tm.Elasped() << endl;
	cout << "d cout : " << dd.value() << endl;
	cout << "e cout : " << ee.value() << endl;
	cout << "f cout : " << ff.value() << endl;
	cout << "g cout : " << gg.value() << endl;
	cout << "p cout : " << pp.value() << endl;

	
	getchar();
}

