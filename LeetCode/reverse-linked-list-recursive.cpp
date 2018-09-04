ListNode* reverseListHelper(ListNode* curr, ListNode* prev, ListNode* next) {
	if (!next) {
		curr->next = prev;
		return curr;
	}
	curr->next = prev;
	prev = curr;
	curr = next;
	next = next->next;
	return reverseListHelper(curr, prev, next);
}

ListNode* reverseListRecursive(ListNode* head) {
	if (!head || !head->next) return head;

	return reverseListHelper(head, nullptr, head->next);
}
