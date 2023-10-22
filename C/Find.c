int find(struct Queue *queue, int item) {
    if (isEmpty(queue)) {
        return -1;  // Queue is empty; item cannot be found.
    }
    for (int i = queue->front, position = 0; i <= queue->rear; i++, position++) {
        if (queue->array[i] == item) {
            return position;  // Item found at position 'position'.
        }
    }
    return -1;  // Item not found in the queue.
}
