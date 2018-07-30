bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = head;
    SinglyLinkedListNode* next = head;
    if (next == NULL){
        return false;
    }
    while ( next != NULL && next->next != NULL) {
        prev = prev->next;
        next = next->next->next;
        if (next == prev) {
            return true;
        }
    }
    return false;

}
