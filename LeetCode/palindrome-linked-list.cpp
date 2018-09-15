ListNode* reverseAndClone(ListNode* node) {
	ListNode* head = nullptr;

	while (node) {
		ListNode* n = new ListNode(node->val);
		n->next = head;
		head = n;
		node = node->next;
	}
	return head;
}

bool isPalindrome(ListNode* head) {
	if (!head) return true;	

	ListNode* reversed = reverseAndClone(head);
	ListNode* rev = reversed;
	ListNode* curr = head;
	int count = 0;
	while (curr) {
		curr = curr->next;
		count++;
	}
	cout << count << endl;
	curr = head;
	int i = 0;
	while (i < (count / 2)) {
		if (curr->val == rev->val) i++;
		else return false;
		curr = curr->next;
		rev = rev->next;
	}
	return true;
}
