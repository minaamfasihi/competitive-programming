public int longestConsecutive(int[] nums) {
    Set<Integer> unprocessed = new HashSet<>();
    for (int num : nums) {
        unprocessed.add(num);    
    }
    int maxInterval = 0;
    while (!unprocessed.isEmpty()) {
        int num = (int) unprocessed.iterator().next();
        unprocessed.remove(num);

        int lower = num - 1;
        while (unprocessed.contains(lower)) {
            unprocessed.remove(lower);
            lower--;
        }

        int higher = num + 1;
        while (unprocessed.contains(higher)) {
            unprocessed.remove(higher);
            higher++;
        }

        maxInterval = Math.max(maxInterval, higher - lower - 1);
    }
    return maxInterval;
}
