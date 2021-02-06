#include "input.h"
#include <cassert>
#include <iostream>

#ifndef GET_GRID
#define GET_GRID
void getGrid(int grid[9][9]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			char c;
			std::cin >> c;
			assert(c >= '0' && c <= '9');
			grid[i][j] = static_cast <int> (c - '0');
		}
	}
}
#endif
