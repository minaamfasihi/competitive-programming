public boolean isMajorityElement(int[] nums, int target) {
    if (nums == null || nums.length == 0) return false;
    int mid = nums.length / 2;
    if (nums.length % 2 == 0) {
        if (mid + 1 < nums.length && !(nums[mid + 1] == target)) 
            return false;

    } else {
        if (!(nums[mid] == target)) return false;
    }
    int count = 0;
    for (int i = 0; i < nums.length; i++) {
        if (nums[i] == target) {
            count++;
        }
    }
    return count > mid ? true : false;
}
