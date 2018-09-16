TreeNode* sortedArrayToBSTHelper(vector<int> & nums, int start, int end) {
	if (start > end) return nullptr;

	int mid = ((start + end) / 2);
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = sortedArrayToBSTHelper(nums, start, mid - 1);
	root->right = sortedArrayToBSTHelper(nums, mid + 1, end);
	return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
	if (nums.size() == 0) return nullptr;

	return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
}
