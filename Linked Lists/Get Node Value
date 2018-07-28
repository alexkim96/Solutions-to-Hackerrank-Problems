int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int i = 0;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* answer = head;
    while (current != NULL) {
        current = current->next;
        if (i > positionFromTail) {
            answer = answer->next;
        }
        i++;
    }   
    return answer->data;
}
