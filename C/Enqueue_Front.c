void enqueueFront(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty(queue)) {
            queue->front = 0;
            queue->rear = 0;
        } else {
            queue->front = (queue->front - 1 + MAX_SIZE) % MAX_SIZE;
        }
        queue->array[queue->front] = value;
    }
}
