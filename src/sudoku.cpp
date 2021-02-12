#include "io.h"
#include "sudoku.h"


bool contraddiction(int grid[9][9]) {
  // check rows
  for (int i = 0; i < 9; i++) {
    bool seen[10] {};
    for (int j = 0; j < 9; j++) {
      int value = grid[i][j];
      if (value != 0 && seen[value]) {
        return true;
      }
      seen[value] = true;
    }
  }

  // check columns
  for (int i = 0; i < 9; i++) {
    bool seen[10] {};
    for (int j = 0; j < 9; j++) {
      int value = grid[j][i];
      if (value != 0 && seen[value]) {
        return true;
      }
      seen[value] = true;
    }
  }

  // check for 3x3 quadrants
  for (int qi = 0; qi < 3; qi++) {
    for (int qj = 0; qj < 3; qj++) {
      bool seen[10] {};
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          int value = grid[3*qi + i][3*qj + j];
          if (value != 0 && seen[value]) {
            return true;
          }
          seen[value] = true;
        }
      }
    }
  }

  return false;
}


bool isFull(int grid[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (grid[i][j] == 0) {
        return false;
      }
    }
  }

  return true;
}


void findASolution(int grid[9][9], int &analysisCounter, bool &gridFound) {
  if (gridFound) {
    return;
  }
  analysisCounter++;

  if (contraddiction(grid)) {
    return;
  }

  if (isFull(grid)) {
    gridFound = true;
    printGrid(grid, analysisCounter);
    return;
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (grid[i][j] == 0) {
        for (int val = 1; val <= 9; val++) {
          grid[i][j] = val;
          findASolution(grid, analysisCounter, gridFound);
        }
        grid[i][j] = 0;

        return;
      }
    }
  }
}
