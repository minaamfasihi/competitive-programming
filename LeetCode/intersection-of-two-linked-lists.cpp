struct Result {
	ListNode* tail;
	int size;
	Result(ListNode* node, int s) {
		tail = node;
		size = s;
	}
};

ListNode* getKthNode(ListNode* head, int k) {
	if (!head) return head;

	ListNode* current = head;
	while (k > 0 && current) {
		current = current->next;
		k--;
	}
	return current;
}

Result* getTailAndSize(ListNode* head) {
	if (!head) return nullptr;

	ListNode* curr = head;
	int size = 0;
	while (curr->next) {
		curr = curr->next;
		size++;
	}
	return new Result(curr, size);
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	if (!headA || !headB) return nullptr;

	Result* res1 = getTailAndSize(headA);
	Result* res2 = getTailAndSize(headB);

	if (res1->tail != res2->tail) return nullptr;

	ListNode* shorter = res1->size < res2->size ? headA : headB;
	ListNode* longer = res1->size < res2->size ? headB : headA;
	longer = getKthNode(longer, abs(res1->size - res2->size));
	while (shorter != longer) {
		shorter = shorter->next;
		longer = longer->next;
	}
	return longer;
}
