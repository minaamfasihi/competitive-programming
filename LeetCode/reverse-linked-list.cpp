struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
	if (!head) return head;

	ListNode* curr = head;
	ListNode* prev = nullptr;
	ListNode* next = head->next;
	while (next) {
		curr->next = prev;
		prev = curr;
		curr = next;
		next = next->next;
	}
	curr->next = prev;
	return curr;
}
