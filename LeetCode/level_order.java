class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
     }
}

public List<List<Integer>> levelOrder(TreeNode root) {
    List<List<Integer>> result = new ArrayList<>();
    if (root != null) {
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        HashMap<TreeNode, Integer> visiting = new HashMap<>();
        visiting.put(root, 1);
        List<Integer> lst = new ArrayList<>();
        while (!q.isEmpty()) {
            TreeNode curr = q.remove();
            if (curr == null) {
                if (!q.isEmpty()) q.add(null);
                result.add(lst);
                lst = new ArrayList<>();
                continue;
            }
            lst.add(curr.val);
            if (curr.left != null && !visiting.containsKey(curr.left)) {
                q.add(curr.left);
                visiting.put(curr.left, 1);
            }
            if (curr.right != null && !visiting.containsKey(curr.right)) {
                q.add(curr.right);
                visiting.put(curr.right, 1);
            }
        }
    }
    return result;
}
