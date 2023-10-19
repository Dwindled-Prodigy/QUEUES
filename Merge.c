void mergeQueues(struct Queue *queue1, struct Queue *queue2) {
    if (isEmpty(queue2)) {
        return;  // Nothing to merge from queue2
    }
    if (isFull(queue1)) {
        printf("Merging not possible. Queue1 is full.\n");
        return;
    }

    while (!isEmpty(queue2) && !isFull(queue1)) {
        enqueue(queue1, dequeue(queue2));  // Dequeue from queue2 and enqueue into queue1
    }
}
