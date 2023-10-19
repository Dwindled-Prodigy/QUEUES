int size(struct Queue *queue) {
    if (isEmpty(queue)) {
        return 0;
    }
    return queue->rear - queue->front + 1;
}
