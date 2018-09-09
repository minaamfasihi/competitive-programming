bool deleteMiddleNode(Node* node) {
	if (!node || !node->next) return false;

	Node* next = node->next;
	node->val = next->val;
	node->next = next->next;
	delete next;
	return true;
}
