public int orangesRotting(int[][] grid) {
    if (grid == null || grid[0].length == 0) return 0;

    Queue<String> currentLevel = new LinkedList<>();
    Queue<String> nextLevel = new LinkedList<>();
    for (int i = 0; i < grid.length; i++) {
        for (int j = 0; j < grid[i].length; j++) {
            if (grid[i][j] == 2) {
                currentLevel.add(i + "," + j);
            }
        }
    }
    int mins = 0;
    int[][] directions = new int[][] {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!currentLevel.isEmpty()) {
        String point = currentLevel.remove();
        int row = Integer.parseInt(point.split(",")[0]);
        int col = Integer.parseInt(point.split(",")[1]);

        for (int i = 0; i < directions.length; i++) {
            int rr = row + directions[i][0];
            int cc = col + directions[i][1];
            if (isSafe(grid, rr, cc)) {
                grid[rr][cc] = 2;
                nextLevel.add(rr + "," + cc);
            }
        }    
        if (currentLevel.isEmpty()) {
            if (!nextLevel.isEmpty()) 
                mins += 1;
            currentLevel = nextLevel;
            nextLevel = new LinkedList<>();
        }
    }
    for (int i = 0; i < grid.length; i++) {
        for (int j = 0; j < grid[0].length; j++) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }
    return mins;
}

public boolean isSafe(int[][] grid, int row, int col) {
    return (row >= 0 && row < grid.length && col >= 0 && col < grid[row].length &&
           grid[row][col] == 1);
}
