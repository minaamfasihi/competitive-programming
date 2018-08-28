TreeNode* inorderTraversal(TreeNode* root) {
	stack<TreeNode*> s;
	TreeNode* n = root;
	while (n || !s.empty()) {
		if (n) {
			s.push(n);
			n = n->left;
		}
		else {
			n = s.top();
			return n;
		}
	}
	return nullptr;
}

TreeNode* inorderSuccessor(TreeNode* p, TreeNode* q) {
	if (!q || !p) return nullptr;

	if (q->right) return inorderTraversal(q->right);

	TreeNode* curr = p;
	TreeNode* currLeft = nullptr;
	while (curr->val != q->val) {
		if (curr->val > q->val) {
			currLeft = curr;
			curr = curr->left;
		}
		else if (curr->val < q->val) {
			curr = curr->right;
		}
	}
	return currLeft;
}
