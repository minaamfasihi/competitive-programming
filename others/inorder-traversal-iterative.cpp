vector<int> inorderTraversal(TreeNode* root) {
	stack<TreeNode*> s;
	vector<int> path;
	TreeNode* n = root;
	while (n != nullptr || !s.empty()) {
		if (n != nullptr) {
			s.push(n);
			n = n->left;
		}
		else {
			n = s.top();
			s.pop();
			path.push_back(n->val);
			n = n->right;
		}
	}
	return path;
}
