public int[] twoSum(int[] nums, int target) {
    if (nums == null || nums.length == 0) return new int[0];

    HashMap<Integer, Integer> map = new HashMap<>();
    int[] result = new int[2];
    for (int i = 0; i < nums.length; i++) {
        if (map.containsKey(target - nums[i])) {
            result[0] = map.get(target - nums[i]);
            result[1] = i;
        }
        else if (!map.containsKey(nums[i])) map.put(nums[i], i);
    }
    return result;
}
