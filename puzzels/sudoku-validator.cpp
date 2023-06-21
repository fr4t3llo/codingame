/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku-validator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:57:17 by skasmi            #+#    #+#             */
/*   Updated: 2023/06/21 17:58:42 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>


const int SIZE = 9;
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

bool isValidRow(const int grid[SIZE][SIZE], int row) {
    std::set<int> nums;
    for (int col = 0; col < SIZE; col++) {
        int num = grid[row][col];
        if (num < 1 || num > 9 || nums.count(num) > 0) {
            return false;
        }
        nums.insert(num);
    }
    return true;
}

// Function to check if a column is valid
bool isValidColumn(const int grid[SIZE][SIZE], int col) {
    std::set<int> nums;
    for (int row = 0; row < SIZE; row++) {
        int num = grid[row][col];
        if (num < 1 || num > 9 || nums.count(num) > 0) {
            return false;
        }
        nums.insert(num);
    }
    return true;
}

// Function to check if a subgrid is valid
bool isValidSubgrid(const int grid[SIZE][SIZE], int startRow, int startCol) {
    std::set<int> nums;
    for (int row = startRow; row < startRow + 3; row++) {
        for (int col = startCol; col < startCol + 3; col++) {
            int num = grid[row][col];
            if (num < 1 || num > 9 || nums.count(num) > 0) {
                return false;
            }
            nums.insert(num);
        }
    }
    return true;
}

// Function to check if the Sudoku grid is valid
bool isValidSudoku(int grid[SIZE][SIZE]) {
    // Check rows
    for (int row = 0; row < SIZE; row++) {
        if (!isValidRow(grid, row)) {
            return false;
        }
    }

    // Check columns
    for (int col = 0; col < SIZE; col++) {
        if (!isValidColumn(grid, col)) {
            return false;
        }
    }

    // Check subgrids
    for (int startRow = 0; startRow < SIZE; startRow += 3) {
        for (int startCol = 0; startCol < SIZE; startCol += 3) {
            if (!isValidSubgrid(grid, startRow, startCol)) {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int array[SIZE][SIZE];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            // int n;
            cin >> array[i][j], cin.ignore();
        }
    }
    const int SIZE = 9;
    if (isValidSudoku(array) == true)
        cout << "true";
    else 
        cout << "false";
}