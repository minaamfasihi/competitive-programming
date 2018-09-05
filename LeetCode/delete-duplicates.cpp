struct ListNode {
	int val;
	ListNode* next;
	ListNode(int v) : val(v), next(nullptr) {}
};

ListNode* deleteDuplicates(ListNode* head) {
	if (!head || !head->next) return head;

	ListNode* curr = head;
	ListNode* prev = nullptr;
	while (curr) {
		if (prev && prev->val == curr->val) {
			prev->next = curr->next;
			curr->next = nullptr;
			delete curr; curr = nullptr;
			curr = prev->next;
			continue;
		}
		else {
			prev = curr;
		}
		if (curr) curr = curr->next;
		else break;
	}
	return head;
}
