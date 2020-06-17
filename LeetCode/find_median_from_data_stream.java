class MedianFinder {
    PriorityQueue<Integer> minHeap;
    PriorityQueue<Integer> maxHeap;
    /** initialize your data structure here. */
    public MedianFinder() {
        minHeap = new PriorityQueue<>();
        maxHeap = new PriorityQueue<>(Collections.reverseOrder());
    }
    
    public void addNum(int num) {
        if (minHeap.size() == 0) minHeap.add(num);
        else {
            if (num >= minHeap.peek()) minHeap.add(num);
            else maxHeap.add(num);
        }
        if (minHeap.size() > maxHeap.size() + 1) 
            maxHeap.add(minHeap.poll());
        else if (minHeap.size() < maxHeap.size()) minHeap.add(maxHeap.poll());
    }
    
    public double findMedian() {
        return minHeap.size() == maxHeap.size() ? 0.5 * (minHeap.peek() + maxHeap.peek())
            : minHeap.peek();
    }
}
