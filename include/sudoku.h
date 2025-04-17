/**
 * @file sudoku.h
 * @brief Core Sudoku solving and board generation functions.
 *
 * This header file declares functions essential for solving Sudoku puzzles
 * and validating board states. It includes:
 * - A backtracking Sudoku solver.
 * - A cell validation function to ensure valid number placement.
 * - A board generation stub for creating Sudoku puzzles.
 *
 * All functions operate on dynamically allocated 9x9 Sudoku boards
 * represented as `int**`, where empty cells are denoted by 0.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

#ifndef SUDOKUPROJECT_SUDOKU_H
#define SUDOKUPROJECT_SUDOKU_H

#include <iostream>

/**
 * @brief Checks if key is valid in location
 *
 * Checks if key K is a valid item to place in (r, c)
 *
 * @param BOARD A pointer to the 2D Sudoku board (int**).
 * @param r Row index for the candidate
 * @param c Column index for the candidate
 * @param k Candidate number to test
 * @return Validity of candidate number, true if valid, false if invalid
 */
bool isValid(int** BOARD, const int& r, const int& c, const int& k);

/**
 * @brief Solves the board using recursion and backtracking
 *
 * @param BOARD A pointer to the 2D Sudoku board (int**).
 * @param r Starting row Index (Default = 0)
 * @param c Starting column Index (Default = 0)
 * @return true if board solved, false if error occurred or backtracking needed
 */
bool solveBoard(int** BOARD, const int& r=0, const int& c=0);

// ========================= Efficient Solutions ==========================


/**
 * @brief Finds the next cell to fill using MRV Heuristic
 *
 * @param BOARD A pointer to the 2D Sudoku board (int**).
 * @return tuple in the format <r, c, k> where r is best row, c is best col, k is number of candidates.
 */
std::tuple<int, int, int> findNextCell(int** BOARD);


/**
 * @brief Solves the board efficiently using MRV
 *
 * @param BOARD A pointer to the 2D Sudoku board (int**).
 * @return true if board solved, false is used for backtracking
 */
bool solveBoardEfficient(int** BOARD);

/**
 * @brief Solves the board efficiently using MRV
 *
 * @param board A pointer to the 2D Sudoku board (int**).
 * @param efficient Bool to determine if we use efficient solve or not (Default = false)
 * @return true if board solved, false is used for backtracking
 */
bool solve(int** board, const bool& efficient = false);

#endif //SUDOKUPROJECT_SUDOKU_H