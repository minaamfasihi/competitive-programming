bool hasCycle(ListNode *head) {
	if (!head) return false;

	ListNode* fast = head; ListNode* slow = head;
	while (fast) {
		fast = fast->next;
		if (fast && slow) {
			if (fast == slow) return true;
			fast = fast->next;
			if (fast) {
				if (fast == slow) return true;
				slow = slow->next;
				if (fast && slow) {
					if (fast == slow) return true;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}
	return false;
}
