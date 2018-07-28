SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1 == NULL) return head2;
    else if (head2 == NULL) return head1;
    if (head1->data < head2->data) {
        SinglyLinkedListNode* node = head1->next;
        head1->next = mergeLists(node, head2);
        return head1;
    }
    else {
        SinglyLinkedListNode* node2 = head2->next;
        head2->next = mergeLists(head1, node2);
        return head2;
    }
    
