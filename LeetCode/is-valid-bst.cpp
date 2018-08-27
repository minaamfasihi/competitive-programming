/*WARNING: Hacky solution! Using long long to avoid the test cases involving ints only. */

bool isBSTHelper(TreeNode* root, long long min, long long max) {
    if (!root) return true;

    if (((min != LONG_MIN && root->val <= min) || (max != LONG_MAX && root->val >= max))) return false;
    if (!isBSTHelper(root->left, min, root->val) || !isBSTHelper(root->right, root->val, max)) return false;
    return true;
}

bool isValidBST(TreeNode* root) {
    return isBSTHelper(root, LONG_MIN, LONG_MAX);
}
