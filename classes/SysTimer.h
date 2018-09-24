#pragma once

#include <chrono>

class SysTimer
{
public:
	SysTimer();
	~SysTimer();

	void Reset();
	double Elasped();
	int64_t ElaspedMili();
	int64_t ElaspedMicro();
	int64_t ElaspedNano();

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> _begin;
};

