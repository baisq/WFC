#include "SysTimer.h"
#include <iostream>
int rationalTest();
int sysTimerTest()
{
	SysTimer timer;
	for (int i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			timer.Reset();
		}
		rationalTest();
		std::cout << std::endl;
		std::cout << "time elapsed: " << timer.Elasped() << " seconds" << std::endl;
		std::cout << "time elapsed: " << timer.ElaspedMili() << " mili seconds" << std::endl;
		std::cout << "time elapsed: " << timer.ElaspedMicro() << " micro seconds" << std::endl;
		std::cout << "time elapsed: " << timer.ElaspedNano() << " nano seconds" << std::endl;
	}
	return 0;
}
