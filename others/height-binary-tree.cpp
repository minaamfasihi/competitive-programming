struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int height(TreeNode* root) {
	if (!root) return -1;
	int lheight = height(root->left);
	int rheight = height(root->right);
	return max(lheight, rheight) + 1;
}
