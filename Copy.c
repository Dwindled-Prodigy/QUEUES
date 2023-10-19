void copyQueue(struct Queue *source, struct Queue *destination) {
    initializeQueue(destination);  // Initialize the destination queue
    for (int i = source->front; i <= source->rear; i++) {
        enqueue(destination, source->array[i]);
    }
}
