struct ListNode {
	int val;
	ListNode* next;
	ListNode(int v) : val(v), next(nullptr) {}
};

double find_median_of_sorted_circular_lists(ListNode* ptr) {
	if (!ptr) return -1;

	ListNode* curr = ptr->next;
	int length = 1;
	while (curr != ptr) {
		curr = curr->next;
		length++;
	}
	ListNode* temp = ptr;
	while (temp->val < temp->next->val) {
		temp = temp->next;
	}
	ListNode* first = temp->next;
	int counter = 1;
	while (counter < (length / 2)) {
		counter++;
		first = first->next;
	}
	if (length % 2 == 0) {
		return (float)(((float) (first->val + first->next->val)) / (float)2);
	}
	else return first->next->val;
}
