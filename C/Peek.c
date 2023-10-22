int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot peek.\n");
        return -1;  // Return a sentinel value to indicate an empty queue
    }
    return queue->array[queue->front];
}
