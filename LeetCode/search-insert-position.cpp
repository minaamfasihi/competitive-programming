int searchInsert(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (nums[mid] == target) {
			return mid;
		}
		else if (nums[mid] > target) high = mid - 1;
		else low = mid + 1;
	}
	if (high == -1 || low == -1) return 0;
	return low;
}
