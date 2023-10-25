#!/usr/bin/python3
""" a function that calculates the perimeter of an island"""


def island_perimeter(grid):
    if not grid:
        return 0

    myperim = 0
    rows = len(grid)
    columns = len(grid[0])

    for row in range(rows):
        for column in range(columns):
            if grid[row][column] == 1:
                if row == 0 or grid[row - 1][column] == 0:
                    myperim = myperim + 1
                if row == rows - 1 or grid[row + 1][column] == 0:
                    myperim += 1
                if column == 0 or grid[row][column - 1] == 0:
                    myperim += 1
                if column == columns - 1 or grid[row][column + 1] == 0:
                    myperim += 1

    return (myperim)
