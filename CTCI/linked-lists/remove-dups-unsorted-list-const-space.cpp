struct Node {
	int val;
	Node* next;
	Node(int v) : val(v), next(nullptr) {}
};

Node* removeDupsFromUnsortedListWithConstSpace(Node* head) {
	if (!head || !head->next) return head;

	Node* curr = head;
	while (curr) {
		Node* runner = curr;
		while (runner->next) {
			if (runner->next->val == curr->val) {
				Node* temp = runner->next;
				runner->next = runner->next->next;
				delete temp;
				temp = nullptr;
			}
			else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
	return head;
}
