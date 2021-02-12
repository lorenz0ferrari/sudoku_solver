#include <iostream>
#include <iomanip>
#include <ctime>

#include "execTime.h"

clock_t clockBegin;
clock_t clockEnd;

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
