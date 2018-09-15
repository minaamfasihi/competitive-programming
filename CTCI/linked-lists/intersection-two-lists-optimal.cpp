ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) return nullptr;

    ListNode* currA = headA;
    ListNode* currB = headB;

    while (currA != currB) {
        currA = currA ? currA->next : headB;
        currB = currB ? currB->next : headA;
    }
    return currA;
}
