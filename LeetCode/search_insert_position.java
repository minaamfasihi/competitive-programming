public int searchInsert(int[] nums, int target) {
    int low = 0, high = nums.length - 1;
    while (low <= high) {
        int mid = low + ((high - low) >> 1);
        if (nums[mid] == target) return mid;
        else if (nums[mid] > target) high = mid - 1;
        else if (nums[mid] < target) low = mid + 1;
    }
    if (high == -1) return 0;
    return low;
}
