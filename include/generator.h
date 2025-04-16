/**
* @file generator.h
 * @brief Function prototypes for generating random solvable Sudoku boards.
 *
 * This header defines functions to:
 * - Create empty Sudoku boards.
 * - Fill independent diagonal boxes.
 * - Solve and generate a complete Sudoku board.
 * - Randomly delete cells to create a solvable puzzle.
 * - Generate a complete Sudoku puzzle with a specific number of empty cells.
 *
 * Detailed function descriptions and parameters are provided below.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

#ifndef GENERATOR_H
#define GENERATOR_H

#include <vector>

/**
 * @brief Creates an empty Sudoku board
 *
 * Creates a 9x9 array of 0s for Sudoku
 *
 * @return Reference to the empty sudoku board
 */
int** getEmptyBoard();

/**
 * @brief Creates randomized vector
 *
 * Creates a shuffled vector of values 1-9
 *
 * @return Shuffled vector
 */
std::vector<int> getShuffledVector();

/**
 * @brief Fills the independent boxes
 *
 * Fills boxes 1, 5, and 9 with random values given by getShuffledVector()
 *
 * @param BOARD Sudoku board to fill
 */
void fillBoardWithIndependentBox(int** BOARD);

/**
 * @brief Deletes n items from the board
 *
 * Randomly deletes items from a random location until count is the same as n
 *
 * @param BOARD Sudoku board to delete from
 * @param n Number of items to delete
 */
void deleteRandomItems(int** BOARD, const int& n);

/**
 * @brief Generates a solvable board
 *
 * Creates board using calls to getEmptyBoard(), fillBoardWithIndependentBox(), solve(), and deleteRandomItems()
 *
 * @param empty_boxes Number of empty boxes to be in the sudoku puzzle
 */
int** generateBoard(const int& empty_boxes);

#endif // GENERATOR_H
