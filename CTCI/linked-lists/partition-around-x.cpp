struct Node {
	int val;
	Node* next;
	Node(int v) : val(v), next(nullptr) {}
};

Node* partition(Node* head, int x) {
	if (!head || !head->next) return head;

	Node* before = nullptr;
	Node* beforeCurr = nullptr;
	Node* after = nullptr;
	Node* afterCurr = nullptr;

	Node* curr = head;
	while (curr) {
		Node* next = curr->next;
		curr->next = nullptr;

		if (curr->val < x) {
			if (!before) {
				before = curr;
				beforeCurr = curr;
			}
			else {
				beforeCurr->next = curr;
				beforeCurr = curr;
			}
		}
		else {
			if (!after) {
				after = curr;
				afterCurr = curr;
			}
			else {
				afterCurr->next = curr;
				afterCurr = curr;
			}
		}
		curr = next;
	}
	if (!before) return after;
	beforeCurr->next = after;
	return before;
}
