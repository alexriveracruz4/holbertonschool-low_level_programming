#!/usr/bin/python3
"""Define island_perimeter function"""


def island_perimeter(grid):
    """Return the perimeter of the island"""

    w = len(grid[0])
    h = len(grid)
    s = 0
    e = 0

    for i in range(1, h):
        for j in range(1, w):
            if grid[i][j] == 1:
                s += 1
                if (grid[i][j - 1] == 1):
                    e += 1
                if (grid[i - 1][j] == 1):
                    e +=1
    return(4 * s - 2 * e)
