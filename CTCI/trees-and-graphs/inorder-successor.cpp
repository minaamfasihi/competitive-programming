struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode* parent;
	TreeNode(int x) : val(x), left(NULL), right(NULL), parent(NULL) {}
};

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

int val = INT_MIN;
TreeNode* inorderSuccessor(TreeNode* p) {
	if (!p) return nullptr;

	if (val == INT_MIN) val = p->val;

	if (p->right) return inorderTraversal(p->right);

	TreeNode* curr = p;
	
	TreeNode* prev = nullptr;
	while (curr) {
		if (curr->val > val) return curr;
		prev = curr;
		curr = curr->parent;
	}
	if (prev->right) return inorderTraversal(p->right);
	return nullptr;
}
