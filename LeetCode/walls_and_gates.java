public void wallsAndGates(int[][] rooms) {
    if (rooms == null || rooms.length == 0) return;

    Queue<String> q = new LinkedList<>();
    for (int i = 0; i < rooms.length; i++) {
        for (int j = 0; j < rooms[i].length; j++) {
            if (rooms[i][j] == 0) {
                q.add(i + "," + j);
            }
        }
    }
    int[][] directions = new int[][] {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; 
    while (!q.isEmpty()) {
        String point = q.remove();
        int row = Integer.parseInt(point.split(",")[0]);
        int col = Integer.parseInt(point.split(",")[1]);
        int dist = rooms[row][col] + 1;

        for (int i = 0; i < directions.length; i++) {
            int rr = row + directions[i][0];
            int cc = col + directions[i][1];

            if (isSafe(rooms, rr, cc) && dist < rooms[rr][cc]) {
                rooms[rr][cc] = dist;
                q.add(rr + "," + cc);
            }
        }
    } 
}

public boolean isSafe(int[][] rooms, int i, int j) {
    return (i >= 0 && i < rooms.length && j >= 0 && j < rooms[0].length && rooms[i][j] == Integer.MAX_VALUE);
}
