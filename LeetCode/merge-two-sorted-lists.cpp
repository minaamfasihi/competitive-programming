ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* mergedList = nullptr;
        ListNode* res = nullptr;
        while (l1 != nullptr && l2 != nullptr) {
            if (res == nullptr) {
                res = new ListNode(-1);
                mergedList = res;
                if (l1->val > l2->val) {
                    res->val = l2->val;
                    l2 = l2->next;
                }
                else {
                    res->val = l1->val;
                    l1 = l1->next;
                }
            }
            else {
                res->next = new ListNode(-1);
                res = res->next;
                if (l1->val > l2->val) {
                    res->val = l2->val;
                    l2 = l2->next;
                }
                else {
                    res->val = l1->val;
                    l1 = l1->next;
                }
            }
        }
        while (l1 != nullptr) {
            if (res == nullptr) {
                res = new ListNode(-1);
                mergedList = res;
                res->val = l1->val;
            }
            else {
                res->next = new ListNode(-1);
                res = res->next;
                res->val = l1->val;
            }
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            if (res == nullptr) {
                res = new ListNode(-1);
                mergedList = res;
                res->val = l2->val;
            }
            else {
                res->next = new ListNode(-1);
                res = res->next;
                res->val = l2->val;
            }
            l2 = l2->next;
        }
        return mergedList;
    }
