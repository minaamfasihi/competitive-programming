struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int heightHelper(TreeNode* root, int& result) {
	if (!root) return -1;

	result = max(heightHelper(root->left, result), heightHelper(root->right, result)) + 1;
	return result;
}

int height(TreeNode* root) {
	int result = -1;
	return heightHelper(root, result);
}
