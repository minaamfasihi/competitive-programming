class Point implements Comparable<Point> {
    int x, y;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    
    public double distance() {
        return Math.sqrt(x * x + y * y);
    }
    
    @Override
    public int compareTo(Point other) {
        return Double.compare(this.distance(), other.distance());
    }
}

class Solution {
    public int[][] kClosest(int[][] points, int K) {
        if (points == null || points.length == 0) return new int[0][0];
        
        List<Point> lst = new ArrayList<>();
        PriorityQueue<Point> pq = new PriorityQueue<>(Collections.reverseOrder());
        for (int i = 0; i < points.length; i++) {
            Point point = new Point(points[i][0], points[i][1]);
            lst.add(point);
            if (pq.size() < K) {
                pq.add(point);
            }
        }
        for (int i = K; i < points.length; i++) {
            if (pq.peek().distance() > lst.get(i).distance()) {
                pq.remove();
                pq.add(lst.get(i));
            }
        }
        int[][] result = new int[K][2];
        for (int i = 0; !pq.isEmpty(); i++) {
            Point p = pq.remove();
            result[i][0] = p.x;
            result[i][1] = p.y;
        }
        return result;
    }
}
