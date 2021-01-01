//Lorenzo Ferrari - 01/01/2021
//Sudoku Solver - Backtracking

#include "input.h"
#include "output.h"
#include "sudoku.h"
#include "execTime.h"

#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);

	int grid[9][9] {};
	int analysisCounter { 0 };
	bool gridFound { false };
	getGrid(grid);

	getBeginTime();
	findASolution(grid, analysisCounter, gridFound);

	getEndTime();
	printExecTime();
}
