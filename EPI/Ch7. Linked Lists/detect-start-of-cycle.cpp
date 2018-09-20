struct ListNode {
	int val;
	ListNode* next;
	ListNode(int v) : val(v), next(nullptr) {}
};

ListNode* detect_start_of_cycle(ListNode* head) {
	if (!head) return nullptr;

	ListNode* fast = head, *slow = head;
	while (slow && fast && slow->next && fast->next && fast->next->next) {
		slow = slow->next, fast = fast->next->next;
		if (slow == fast) {
			int cycle_length = 1;
			while (fast->next != slow) {
				fast = fast->next;
				cycle_length++;
			}
			slow = head, fast = head;
			while (cycle_length--) {
				fast = fast->next;
			}
			while (slow != fast) {
				slow = slow->next; fast = fast->next;
			}
			return slow;
		}
	}
	return nullptr;
}
