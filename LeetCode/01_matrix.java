class Solution {
    public int[][] updateMatrix(int[][] matrix) {
        if (matrix == null || matrix[0].length == 0) return new int[0][0];
        
        int rows = matrix.length;
        int cols = matrix[0].length;
        Queue<String> q = new LinkedList<>();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][j] = 0;
                    q.add(i + ", " + j);
                } else matrix[i][j] = Integer.MAX_VALUE;
            }
        }
        bfs(q, matrix);
        return matrix;
    }
    
    public void bfs(Queue<String> q, int[][] matrix) {
        while (!q.isEmpty()) {
            String cell = q.poll();
            int row = Integer.parseInt(cell.split(", ")[0]);
            int col = Integer.parseInt(cell.split(", ")[1]);
            
            int dist = matrix[row][col] + 1;
            
            // up
            if ((row - 1) >= 0 && matrix[row - 1][col] > dist) {
                matrix[row - 1][col] = dist;
                q.add((row - 1) + ", " + col);
            }
            // down
            if ((row + 1) < matrix.length && matrix[row + 1][col] > dist) {
                matrix[row + 1][col] = dist;
                q.add((row + 1) + ", " + col);
            }
            // left
            if ((col - 1) >= 0 && matrix[row][col - 1] > dist) {
                matrix[row][col - 1] = dist;
                q.add(row + ", " + (col - 1));
            }
            // right            
            if ((col + 1) < matrix[row].length && matrix[row][col + 1] > dist) {
                matrix[row][col + 1] = dist;
                q.add(row + ", " + (col + 1));
            }
        }
    }
}
