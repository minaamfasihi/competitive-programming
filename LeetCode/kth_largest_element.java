public int findKthLargest(int[] nums, int k) {
    if (nums == null || nums.length == 0 || k > nums.length) return -1;

    PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
    for (int i = 0; i < nums.length; i++) {
        pq.add(nums[i]);
    }

    for (int i = 0; i < k - 1; i++) {
        pq.remove();
    }
    return pq.remove();
}
