struct ListNode {
    int data;
    ListNode* next;
};

ListNode* toLinkedList() {
    if (isEmpty()) {
        return nullptr;
    }
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i = front; i <= rear; i++) {
        ListNode* newNode = new ListNode;
        newNode->data = array[i];
        newNode->next = nullptr;
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
