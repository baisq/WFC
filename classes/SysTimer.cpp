
#include "SysTimer.h"
using namespace std;
using namespace std::chrono;

SysTimer::SysTimer()
{
	Reset();
}


SysTimer::~SysTimer()
{
}

void SysTimer::Reset()
{
	_begin = high_resolution_clock::now();
}

double SysTimer::Elasped()
{
	return duration_cast<duration<double> > (high_resolution_clock::now() - _begin).count();
}

int64_t SysTimer::ElaspedMili()
{
	return duration_cast<chrono::milliseconds> (high_resolution_clock::now() - _begin).count();
}

int64_t SysTimer::ElaspedMicro()
{
	return duration_cast<chrono::microseconds> (high_resolution_clock::now() - _begin).count();
}

int64_t SysTimer::ElaspedNano()
{
	return duration_cast<chrono::nanoseconds> (high_resolution_clock::now() - _begin).count();
}