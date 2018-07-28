int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* shead = head2;
    while (head1 != NULL && shead != NULL) {
        while (shead != NULL) {
            if (head1 == shead) {
                return head1->data;
            }
            shead = shead->next;
        }
        head1 = head1->next;
        if (head1 != NULL) {
            shead = head2;
        }
    }
    return head1 -> data;
}
