int height(TreeNode* root, int& flag) {
    if (!root) return 0;
    int lheight = height(root->left, flag);
    int rheight = height(root->right, flag);
    if (abs(lheight - rheight) > 1) flag = -1;
    return max(lheight, rheight) + 1;
}

bool isBalanced(TreeNode* root) {
    if (root) {
        int flag = 0;
        int left = height(root->left, flag);
        int right = height(root->right, flag);
        if (flag == -1) {
            return false;
        }
        return abs(left - right) <= 1;
    }
    return true;
}
