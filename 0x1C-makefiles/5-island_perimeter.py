#!/usr/bin/python3
""" a function that calculates the perimeter of an island"""


def island_perimeter(grid):
    myperim = 0
    edges = 0
    myheight = len(grid)
    mywidth = len(grid[0])

    for i in range(myheight):
        for m in range(mywidth):
            if grid[i][m] == 1:
                myperim += 1
                if (m > 0 and grid[i][m - 1] == 1):
                    edges =+ 1
                if (i > 0 and grid[i - 1][m] == 1):
                    edges += 1

    return myperim * 4 - edges * 2
