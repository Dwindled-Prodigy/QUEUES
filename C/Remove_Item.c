void remove(struct Queue *queue, int item) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot remove.\n");
        return;
    }
    int i, j;
    for (i = queue->front, j = 0; i <= queue->rear; i++, j++) {
        if (queue->array[i] == item) {
            for (int k = i; k < queue->rear; k++) {
                queue->array[k] = queue->array[k + 1];
            }
            queue->rear--;
            return;
        }
    }
    printf("Item not found in the queue.\n");
}
