void preOrder(Node *root) {
    if (root) {
        std::cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
