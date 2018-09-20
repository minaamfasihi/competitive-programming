struct ListNode {
	int val;
	ListNode* next;
	ListNode(int v) : val(v), next(nullptr) {}
};

void append(ListNode* head, ListNode* tail, ListNode* n) {
	head ? tail->next = n : head = n;
	tail = n;
}

void append_and_advance(ListNode* head, ListNode* tail, ListNode* n) {
	append(head, tail, n);
	n = n->next;
}

ListNode* merge_two_sorted_lists(ListNode* l1, ListNode* l2) {
	if (!l1) return l2;
	if (!l2) return l1;

	ListNode* sorted_head = nullptr, *tail = nullptr;
	while (l1 && l2) {
		append_and_advance(sorted_head, tail, l1->val > l2->val ? l2 : l1);
	}
	if (l1) {
		append_and_advance(sorted_head, tail, l1);
	}
	if (l2) {
		append_and_advance(sorted_head, tail, l2);
	}
	return sorted_head;
}
