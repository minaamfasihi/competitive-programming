TreeNode* mergeHelper(TreeNode* r1, TreeNode* r2) {
	if (r1 && r2) return new TreeNode(r1->val + r2->val);
	else if (r1) return new TreeNode(r1->val);
	else if (r2) return new TreeNode(r2->val);
	else return nullptr;
}

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
	if (t1 && t2) {
		TreeNode* root = mergeHelper(t1, t2);
		root->left = mergeTrees(t1->left, t2->left);
		root->right = mergeTrees(t1->right, t2->right);
		return root;
	}
	else if (t1) {
		return t1;
	}
	else if (t2) {
		return t2;
	}
	else return nullptr;
}
