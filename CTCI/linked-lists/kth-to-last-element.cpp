struct Node {
	int val;
	Node* next;
	Node(int v) : val(v), next(nullptr) {}
};

Node* kthToLastElement(Node* head, int k) {
	if (k < 0) return nullptr;

	int count = 0;
	Node* fast = head;
	while (fast && count < k) {
		count++;
		fast = fast->next;
	}
	if (count != k) {
		return nullptr;
	}
	Node* slow = head;
	while (fast) {
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}
