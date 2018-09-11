struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* rotateRight(ListNode* head, int k) {
	if (!head || !head->next || k <= 0) return head;

	int size = 0;
	ListNode* temp = head;
	while (temp) {
		temp = temp->next;
		size++;
	}
	k = k % size;
	if (k == 0) return head;

	int c = 0;
	ListNode* fast = head;
	ListNode* slow = head;
	while (c < k) {
		fast = fast->next;
		c++;
	}
	while (fast->next) {
		slow = slow->next;
		fast = fast->next;
	}
	temp = slow->next;
	slow->next = nullptr;
	ListNode* prevHead = head;
	head = temp;
	fast->next = prevHead;
	return head;
}
