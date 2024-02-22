#!/usr/bin/python3
'''island perimeter '''


def island_perimeter(grid):
    """Return the perimiter of an island."""
    H = len(grid)
    W = len(grid[0])

    def dfs(x, y):
        if x < 0 or x >= H or y < 0 or y >= W or grid[x][y] == 0:
            return 1
        if grid[x][y] == 1:
            grid[x][y] = 3
            return dfs(x-1, y)+dfs(x+1, y)+dfs(x, y-1)+dfs(x, y+1)
        return 0

    z = 0
    for x in range(H):
        for y in range(W):
            if grid[x][y] == 1:
                z += dfs(x, y)

    return z
