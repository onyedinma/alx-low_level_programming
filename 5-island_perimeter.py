#!/usr/bin/python3
"""
Module that define the function island_perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    if grid is None or grid == [[]]:
        return

    perimeter = 0
    lenght = len(grid) - 1
    width = len(grid[0]) - 1

    for i, value in enumerate(grid):
        for j, val in enumerate(value):
            if val == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j == width or grid[i][j + 1] != 1:
                    perimeter += 1
                if i == lenght or grid[i + 1][j] != 1:
                    perimeter += 1
    return perimeter
