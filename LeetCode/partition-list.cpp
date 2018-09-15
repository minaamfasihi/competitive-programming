ListNode* partition(ListNode* head, int x) {
    if (!head || !head->next) return head;

    ListNode* before = nullptr;
    ListNode* beforeCurr = nullptr;
    ListNode* after = nullptr;
    ListNode* afterCurr = nullptr;

    ListNode* curr = head;
    while (curr) {
        ListNode* next = curr->next;
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
