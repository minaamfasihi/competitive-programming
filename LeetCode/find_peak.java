public int findPeakElement(int[] nums) {
    if (nums == null || nums.length == 0) return -1;

    if (nums.length == 1 || nums[0] > nums[1]) return 0;
    if (nums[nums.length - 1] > nums[nums.length - 2]) return nums.length - 1;
    return binarySearch(nums, 0, nums.length - 1);
}

public int binarySearch(int[] nums, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || nums[mid - 1] <= nums[mid]) && 
            (mid == nums.length - 1 || nums[mid + 1] <= nums[mid]))
                return mid;
        else if (mid > 0 && nums[mid - 1] > nums[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}
