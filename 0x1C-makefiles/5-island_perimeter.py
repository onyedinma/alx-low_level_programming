#!/usr/bin/python3
"""
Module for computing the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Compute the perimeter of an island in a grid.

    Args:
        grid (List[List[int]]): A rectangular grid of 0's and 1's, representing water and land cells.

    Returns:
        int: The perimeter of the island in the grid.
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter
