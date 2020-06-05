public int numIslands(char[][] grid) {
    if (grid.length == 0 || grid[0].length == 0) return 0;

    int numIslands = 0;
    int n = grid.length;
    int m = grid[0].length;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1')
                numIslands += dfs(grid, i, j);
        }
    }

    return numIslands;
}

public int dfs(char[][] grid, int start, int end) {
    if (start < 0 || start >= grid.length || end < 0 || 
        end >= grid[0].length || grid[start][end] == '0') {
        return 0;
    }

    grid[start][end] = '0';

    dfs(grid, start, end + 1);
    dfs(grid, start, end - 1);
    dfs(grid, start + 1, end);
    dfs(grid, start - 1, end);
    return 1;
}
