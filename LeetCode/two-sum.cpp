#include <iostream>

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* tl1 = l1;
		ListNode* tl2 = l2;
		ListNode* tr = NULL;
		ListNode* r = tr;
		int sum = 0;
		bool carry = false;
		while (tl1 != NULL && tl2 != NULL) {
			sum = tl1->val + tl2->val;
			if (carry) {
				sum += 1;
			}
			if (sum > 9) {
				carry = true;
				if (tr == NULL) {
					tr = new ListNode(sum % 10);
					r = tr;
				}
				else {
					tr->next = new ListNode(sum % 10);
					tr = tr->next;
				}
			}
			else {
				carry = false;
				if (tr == NULL) {
					tr = new ListNode(sum);
					r = tr;
				}
				else {
					tr->next = new ListNode(sum);
					tr = tr->next;
				}
			}
			tl1 = tl1->next;
			tl2 = tl2->next;
		}
		if (tl1 != NULL) {
			while (tl1 != NULL) {
				if (carry) {
					tl1->val += 1;
					if (tl1->val < 10) {
						carry = false;
					}
				}
				if (tr == NULL) {
					tr = new ListNode(tl1->val % 10);
					r = tr;
				}
				else {
					tr->next = new ListNode(tl1->val % 10);
					tr = tr->next;
				}
				tl1 = tl1->next;
			}
		}

		if (tl2 != NULL) {
			while (tl2 != NULL) {
				if (carry) {
					tl2->val += 1;
					if (tl2->val < 10) {
						carry = false;
					}
				}
				if (tr == NULL) {
					tr = new ListNode(tl2->val % 10);
					r = tr;
				}
				else {
					tr->next = new ListNode(tl2->val % 10);
					tr = tr->next;
				}
				tl2 = tl2->next;
			}
		}

		if (carry) {
			tr->next = new ListNode(1);
			tr = tr->next;
		}

		if (tr != NULL) {
			tr->next = NULL;
			return r;
		}
		return NULL;
	}
};

int main() {
	ListNode* _l1 = new ListNode(2);
	ListNode* _h1 = _l1;
	_l1->next = new ListNode(4);
	_l1 = _l1->next;
	_l1->next = new ListNode(3);
	_l1 = _l1->next;
	_l1->next = NULL;

	ListNode* _l2 = new ListNode(5);
	ListNode* _h2 = _l2;
	_l2->next = new ListNode(6);
	_l2 = _l2->next;
	_l2->next = new ListNode(4);
	_l2 = _l2->next;
	_l2->next = NULL;

	Solution sol;
	ListNode* r1 = sol.addTwoNumbers(_h1, _h2);
	return 0;
}