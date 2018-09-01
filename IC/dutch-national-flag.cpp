void dutchNationalFlag(vector<int>& nums, int index) {
	int left = -1, right = nums.size();
	int middle = -1;
	int target = nums[index];
	while (middle + 1 < right) {
		if (nums[middle + 1] > target) {
			swap(nums[middle + 1], nums[right - 1]);
			right--;
		}
		else if (nums[middle + 1] == target) {
			middle++;
		}
		else {
			swap(nums[left + 1], nums[middle + 1]);
			middle++;
			left++;
		}
	}
}
