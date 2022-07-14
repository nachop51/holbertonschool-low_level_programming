#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """Calculates the perimeter of an island"""
    i, j, perimeter = 0, 0, 0
    while i < len(grid):
        j = 0
        while j < len(grid[i]):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
            j += 1
        i += 1
    return perimeter
