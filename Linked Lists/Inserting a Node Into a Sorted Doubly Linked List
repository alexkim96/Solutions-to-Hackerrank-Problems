DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* node = new DoublyLinkedListNode(data);
    DoublyLinkedListNode* current = head;
    if (current->data > data) {
        node->next = current;
        node->prev = current->prev;
        current->prev = node;
        head = node;
        return head;
    }
    
    while (current->next != NULL) {  
        if (current->data > data) {
            node->prev = current->prev;
            node->next = current;
            current->prev = node;
            return head;
        }
        if (current->next->data > data) {
            node->next = current->next;
            current->next->prev = node;
            current->next = node;
            return head;
        } 
         current = current->next;
    }    
    if (current->data > data) {
        node->next = current;
        node->prev = current->prev;
        current->prev = node;
        return head;
    }
    else {
        node->prev = current;
        current->next = node;
        return head;
    }
    return head;

}
