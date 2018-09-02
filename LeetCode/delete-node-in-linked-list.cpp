void deleteNode(ListNode* node) {
	if (!node) return;

	ListNode* nnext = node->next->next;
	ListNode* next = node->next;
	node->val = node->next->val;
	node->next = nnext;
	delete next;
	next = nullptr;
}
