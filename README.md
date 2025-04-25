# Spiral Matrix Traversal

## Overview
This C++ program implements a solution to traverse a 2D matrix in a spiral order, as described in LeetCode Problem 54. The program takes a 2D matrix as input and returns a 1D vector containing the elements of the matrix in spiral order. (top row, right column, bottom row, left column, and so on).

This problem is commonly asked in coding interviews to test understanding of 2D array manipulation and boundary handling.

## Problem Statement
Given an `m x n` matrix, return all elements of the matrix in spiral order.

### Example
**Input:**
```
matrix = [[1,2,3,4],
          [5,6,7,8],
          [9,10,11,12],
          [13,14,15,16]]
```
**Output:**
```
[1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10]
```

## Solution
The solution is implemented in the file `twoD_vectors_spiral_matrix.cpp`. It uses a while loop to traverse the matrix layer by layer, maintaining four pointers (`stRow`, `endRow`, `stCol`, `endCol`) to track the boundaries of the current layer. The algorithm processes the matrix in the following order:
1. Traverse the top row from left to right.
2. Traverse the rightmost column from top to bottom.
3. Traverse the bottom row from right to left (if not already processed).
4. Traverse the leftmost column from bottom to top (if not already processed).

The boundaries are then updated to move inward, and the process repeats until all elements are visited.

### Key Features
- **Time Complexity**: O(m * n), where `m` is the number of rows and `n` is the number of columns.
- **Space Complexity**: O(1) excluding the output vector, as only a constant amount of extra space is used.
- Handles edge cases such as single-row or single-column matrices.

## How to Run
1. **Prerequisites**: A C++ compiler (e.g., g++).
2. **Clone the repository**:
   ```bash
   git clone https://github.com/Sanju-1114/spiral_matrix.git

   ```
3. **Compile the code**:
   ```bash
   g++ twoD_vectors_spiral_matrix.cpp -o spiral_matrix
   ```
4. **Run the program**:
   ```bash
   ./spiral_matrix
   ```
5. **Expected Output** for the example matrix:
   ```
   Spiral matrix : 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
   ```

## File Structure
- `twoD_vectors_spiral_matrix.cpp`: The main C++ program containing the spiral order traversal logic and a test case.
- `README.md`: This file, providing an overview and instructions.

## Notes
- The code includes checks to avoid duplicate traversal in cases where the matrix has an odd number of rows or columns.
- The solution is optimized for readability and efficiency, making it suitable for both learning and interview preparation.