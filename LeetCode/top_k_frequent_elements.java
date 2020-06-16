class Element implements Comparable<Element> {
    int val;
    int count;
    public Element(int val, int count) {
        this.val = val;
        this.count = count;
    }
    
    @Override
    public int compareTo(Element other) {
        return Integer.compare(this.count, other.count);
    }
}

class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (!map.containsKey(nums[i])) {
                map.put(nums[i], 1);
            } else map.put(nums[i], map.get(nums[i]) + 1);
        }
        
        PriorityQueue<Element> pq = new PriorityQueue<>();
        for (Integer key: map.keySet()) {
            pq.add(new Element(key, map.get(key)));
            if (pq.size() > k) {
                pq.remove();
            }
        }
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = pq.remove().val;
        }
        return result;
    }
}
