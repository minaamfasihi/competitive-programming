class PQNode implements Comparable<PQNode> {
    int value;
    int diff;
    public PQNode(int value, int diff) {
        this.value = value;
        this.diff = diff;
    }
    
    public int compareTo(PQNode other) {
        if (this.diff > other.diff) {
            return 1;
        }
        return this.diff < other.diff ? -1 : 0;
    }
}

class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        List<Integer> result = new ArrayList<>();
        if (arr == null || arr.length == 0 || k > arr.length) {
            return result;
        }
        
        PriorityQueue<PQNode> pQueue = new PriorityQueue<>(Collections.reverseOrder()); // max-heap
        for (int i = 0; i < k; i++) {
            pQueue.add(new PQNode(arr[i], Math.abs(arr[i] - x)));
        }

        for (int i = k; i < arr.length; i++) {
            int diff = Math.abs(arr[i] - x);
            if (diff < pQueue.peek().diff) {
                pQueue.poll();
                pQueue.add(new PQNode(arr[i], diff));
            }
        }
        while (!pQueue.isEmpty()) {
            result.add(pQueue.poll().value);
        }
        Collections.sort(result);
        return result;
    }
}
