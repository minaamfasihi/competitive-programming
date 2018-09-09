struct Node {
	int val;
	Node* next;
	Node(int v) : val(v), next(nullptr) {}
};

Node* removeDupsFromUnsortedList(Node* head) {
	Node* prev = nullptr;
	Node* curr = head;
	map<int, int> m;
	while (curr) {
		if (m.count(curr->val) > 0) {
			Node* temp = curr;
			prev->next = curr->next;
			delete temp;
			temp = nullptr;
			curr = prev->next;
		}
		else {
			m.insert(make_pair(curr->val, 1));
			prev = curr;
			curr = curr->next;
		}
	}
	return head;
}
