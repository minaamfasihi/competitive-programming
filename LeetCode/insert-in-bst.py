def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        if root is None:
            root = TreeNode(val)
            return
        current = root
        while current:
            parent = current
            if current.val >= val:
                current = current.left
            else:
                current = current.right
        current = TreeNode(val)
        if parent.val > val:
            parent.left = current
        else:
            parent.right = current
        return root
