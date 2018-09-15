ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	if (!l1) return l2;
	if (!l2) return l1;

	ListNode* result = nullptr;
	ListNode* resultHead = nullptr;
	int carry = 0;
	int sum = 0;

	while (l1 || l2) {
		sum = 0;
		if (l1) sum = l1->val;
		if (l2) sum += l2->val;
		sum = sum + carry;
		if (sum > 9) carry = sum / 10;
		else carry = 0;
		sum = sum % 10;
		if (!result) {
			result = new ListNode(sum);
			resultHead = result;
		}
		else {
			result->next = new ListNode(sum);
			result = result->next;
		}
		l1 = l1 ? l1->next : nullptr;
		l2 = l2 ? l2->next : nullptr;
	}
	if (carry) {
		result->next = new ListNode(carry);
	}
	return resultHead;
}
