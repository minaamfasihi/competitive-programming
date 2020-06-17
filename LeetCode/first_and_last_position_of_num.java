public int[] searchRange(int[] nums, int target) {
    int[] result = {-1, -1};
    if (nums == null || nums.length == 0) return result;

    int first = bSearchLeft(nums, target);
    int last = bSearchRight(nums, target);
    result[0] = first;
    result[1] = last;
    return result;
}

public int bSearchLeft(int[] nums, int target) {
    int low = 0, high = nums.length - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int left = mid - 1;
        if (nums[mid] == target) {
            if (left < 0 || nums[mid] != nums[left]) return mid;
             else high = mid - 1;
        }
        else if (nums[mid] < target) low = mid + 1;
        else if (nums[mid] > target) high = mid - 1;
    }
    return -1;
}

public int bSearchRight(int[] nums, int target) {
    int low = 0, high = nums.length - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int right = mid + 1;
        if (nums[mid] == target) {
            if (right >= nums.length || nums[mid] != nums[right]) return mid;
             else low = mid + 1;
        }
        else if (nums[mid] < target) low = mid + 1;
        else if (nums[mid] > target) high = mid - 1;
    }
    return -1;
}
