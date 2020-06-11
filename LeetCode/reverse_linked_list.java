public ListNode reverseList(ListNode head) {
    if (head == null) return null;

    ListNode curr = head, prev = null;
    while (curr != null) {
        ListNode next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
