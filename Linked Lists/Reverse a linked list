SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* prev = NULL;
    SinglyLinkedListNode* next;
    while(current != NULL) {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
