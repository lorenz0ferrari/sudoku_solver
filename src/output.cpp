#include "output.h"
#include "sudoku.h"
#include <iostream>

#ifndef PRINT_GRID
#define PRINT_GRID
void printGrid(int grid[9][9], int analysisCounter) {
	std::cout << "SOLUTION:" << "\n\n";

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cout << grid[i][j] << " ";

			if (j % 3 == 2) {
				std::cout << " ";
			}
		}
		std::cout << "\n";

		if (i % 3 == 2) {
			std::cout << "\n";
		}
	}

	std::cout << analysisCounter << " grids analyzed" << "\n";
}
#endif
