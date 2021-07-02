#!/usr/bin/python3
"""Define island_perimeter function"""


def island_perimeter(grid):
    """Return the perimeter of the island"""

    w = len(grid[0])
    h = len(grid)
    s = 0
    e = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return(4 * s - 2 * e)
