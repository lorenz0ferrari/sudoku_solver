#include "execTime.h"
#include <iostream>
#include <iomanip>
#include <ctime>

#ifndef CLOCK_BEGIN
#define CLOCK_BEGIN
clock_t clockBegin;
#endif

#ifndef CLOCK_END
#define CLOCK_END
clock_t clockEnd;
#endif

void getBeginTime() {
	clockBegin = clock();
}

void getEndTime() {
	clockEnd = clock();
}

void printExecTime() {
	double elapsedTime = static_cast <double> (clockEnd - clockBegin)
											 / static_cast <double> (CLOCKS_PER_SEC);

	std::cout << "Sudoku solved in ";
	std::cout << std::setprecision(3) << elapsedTime;
	std::cout << " seconds" << "\n";
}
