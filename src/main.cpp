//Lorenzo Ferrari - 01/01/2021
//Sudoku Solver - Backtracking

#include <iostream>
#include <iomanip>
#include <ctime>

#include "io.h"
#include "sudoku.h"
#include "execTime.h"

#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

int main() {
	freopen (INPUT_FILE, "r", stdin);
	freopen (OUTPUT_FILE, "w", stdout);

	int grid[9][9] {};
	int analysisCounter { 0 };
	bool gridFound { false };
	getGrid(grid);

	getBeginTime();
	findASolution(grid, analysisCounter, gridFound);

	getEndTime();
	printExecTime();
}
