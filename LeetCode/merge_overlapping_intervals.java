class Point implements Comparable<Point> {
    int time;
    boolean isStart;

    public Point(int time, boolean isStart) {
        this.time = time;
        this.isStart = isStart;
    }

    public int getTime() {
        return this.time;
    }

    public boolean getStart() {
        return this.isStart;
    }

    @Override
    public int compareTo(Point other) {
        if (this.time == other.getTime()) {
            if (this.isStart == other.getStart()) {
                return 0;
            } else {
                return this.isStart ? -1 : 1;
            }
        }
        return this.time > other.getTime() ? 1 : -1;
    }
}

class Interval {
    int start;
    int end;

    public Interval(int s, int e) {
        this.start = s;
        this.end = e;
    }

    public int getStart() {
        return this.start;
    }

    public int getEnd() {
        return this.end;
    }
}

class Solution {
    
    public int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length == 0 || intervals[0].length == 0) return new int[0][0];

        List<Interval> result = new ArrayList<>();
        List<Point> points = new ArrayList<>();
        for (int i = 0; i < intervals.length; i++) {
            points.add(new Point(intervals[i][0], true));
            points.add(new Point(intervals[i][1], false));
        }
        Collections.sort(points);
        int start = 0, end = 0, count = 1;
        boolean startFound = false;
        for (int i = 0; i < points.size(); i++) {
            boolean isStart = points.get(i).getStart();
            if (isStart) count++;
            else count--;
            if (!startFound && isStart) {
                startFound = true;
                start = points.get(i).getTime();
            }
            else if (startFound && !isStart && count == 1) {
                startFound = false;
                end = points.get(i).getTime();
                result.add(new Interval(start, end));
            }
        }
        int[][] overlapped = new int[result.size()][2];
        int index = 0;
        for (Interval interval : result) {
            overlapped[index][0] = interval.getStart();
            overlapped[index++][1] = interval.getEnd();
        }
        return overlapped;
    }
}
