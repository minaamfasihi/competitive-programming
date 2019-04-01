def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        curr = root
        if root is None or root.val == val:
            return root
        elif curr.val > val:
            if curr.left:
                return self.searchBST(curr.left, val)
            else:
                return None
        else:
            if curr.right:
                return self.searchBST(curr.right, val)
            else:
                return None
