class PQNode implements Comparable<PQNode> {
    public ListNode node;
    public PQNode(ListNode node) {
        this.node = node;
    }
    
    public int compareTo(PQNode other) {
        if (node.val > other.node.val) {
            return 1;
        }
        return node.val < other.node.val ? -1 : 0;
    }
}

class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        if (lists == null || lists.length == 0) 
            return null;
    
        PriorityQueue<PQNode> pq = new PriorityQueue<>();
        for (int i = 0; i < lists.length; i++) {
            if (lists[i] != null)
                pq.add(new PQNode(lists[i]));
        }
        ListNode result = null;
        ListNode head = null;
        while (!pq.isEmpty()) {
            PQNode curr = pq.poll();
            if (curr.node.next != null) {
                pq.add(new PQNode(curr.node.next));
            }
            if (result == null) {
                result = curr.node;
                head = result;
            } else {
                result.next = curr.node;
                result = result.next;
            }
        }
        return head;
    }
}
