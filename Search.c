bool search(struct Queue *queue, int item) {
    if (isEmpty(queue)) {
        return false;  // Queue is empty; item cannot be found.
    }
    for (int i = queue->front; i <= queue->rear; i++) {
        if (queue->array[i] == item) {
            return true;  // Item found in the queue.
        }
    }
    return false;  // Item not found in the queue.
}
