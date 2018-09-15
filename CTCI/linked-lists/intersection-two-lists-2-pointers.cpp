ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) return nullptr;

    ListNode* currA = headA;
    ListNode* currB = headB;

    while (currA && currB) {
        if (currA == currB) return currA;
        if (!currA->next && !currB->next) {
            if (currA != currB) return nullptr;
        }
        currA = currA->next;
        currB = currB->next;
        if (!currA) currA = headB;
        if (!currB) currB = headA;
    }
    return nullptr;
}
