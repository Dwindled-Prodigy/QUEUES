struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* toLinkedList(struct Queue* queue) {
    if (isEmpty(queue)) {
        return NULL;
    }
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    for (int i = queue->front; i <= queue->rear; i++) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->data = queue->array[i];
        newNode->next = NULL;
        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
