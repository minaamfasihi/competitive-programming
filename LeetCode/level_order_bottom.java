public List<List<Integer>> levelOrderBottom(TreeNode root) {
    List<List<Integer>> result = new ArrayList<>();
    Stack<TreeNode> stack = new Stack<>();
    if (root != null) {
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        stack.push(root);
        stack.push(null);
        HashMap<TreeNode, Integer> visiting = new HashMap<>();
        visiting.put(root, 1);
        List<Integer> lst = new ArrayList<>();
        while (!q.isEmpty()) {
            TreeNode curr = q.remove();
            if (curr == null) {
                if (!q.isEmpty()) { 
                    q.add(null);
                    stack.push(null);

                }
                continue;
            }
            stack.push(curr);
            if (curr.right != null && !visiting.containsKey(curr.right)) {
                q.add(curr.right);
                visiting.put(curr.right, 1);
            }
            if (curr.left != null && !visiting.containsKey(curr.left)) {
                q.add(curr.left);
                visiting.put(curr.left, 1);
            }
        }
        result = getListFromStack(stack);
    }
    return result;
}

public List<List<Integer>> getListFromStack(Stack<TreeNode> s) {
    if (s == null) return null;
    List<List<Integer>> result = new ArrayList<>();
    List<Integer> lst = new ArrayList<>();
    while (!s.isEmpty()) {
        TreeNode curr = s.pop();
        if (curr == null) {
            result.add(lst);
            lst = new ArrayList<>();
            continue;
        }
        lst.add(curr.val);
    }
    return result;
}
