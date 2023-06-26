#!/usr/bin/python3
"""island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if y > 0 and grid[x][y - 1] == 1:
                    edges += 1
                if x > 0 and grid[x - 1][y] == 1:
                    edges += 1
    return size * 4 - edges * 2
