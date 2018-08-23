vector<int> preorderTraversal(TreeNode* root) {
	vector<int> path;
	stack<TreeNode*> s;
	if (root != nullptr) {
		s.push(root);
	}
	while (!s.empty()) {
		TreeNode* temp = s.top();
		s.pop();
		path.push_back(temp->val);
		if (temp->right != nullptr) {
			s.push(temp->right);
		}
		if (temp->left != nullptr) {
			s.push(temp->left);
		}
	}
	return path;
}
