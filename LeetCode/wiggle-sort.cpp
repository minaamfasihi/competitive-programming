void wiggle(vector<int>& nums) {
	if (nums.size() == 0) return;

	bool lessThan = true;
	for (int i = 0; i < nums.size() - 1; i++) {
		if (lessThan) {
			if (nums[i] > nums[i + 1]) {
				swap(nums[i], nums[i+1]);
			}
			lessThan = false;
		}
		else {
			if (nums[i] < nums[i + 1]) {
				swap(nums[i], nums[i + 1]);
			}
			lessThan = true;
		}
	}
}
