SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    if (current == NULL) return head;
    
    while(current->next != NULL) {
        if (current->data == current->next->data) {   
            current->next = current->next->next;
        }
        else {
            current = current->next;
        }
    }
    return head;
}
