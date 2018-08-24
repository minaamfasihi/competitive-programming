vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    TreeNode* curr = root;
    while (curr) {
        if (!curr->left) {
            result.push_back(curr->val);
            curr = curr->right;
        }
        else {
            TreeNode* pred = curr->left;
            while (pred->right && (pred->right != curr)) {
                pred = pred->right;
            }

            if (!pred->right) {
                pred->right = curr;
                curr = curr->left;
            }
            else {
                pred->right = NULL;
                result.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    return result;
}
