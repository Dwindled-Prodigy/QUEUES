int* toArray(struct Queue *queue, int *length) {
    if (isEmpty(queue)) {
        *length = 0;
        return NULL;
    }
    int *result = (int *)malloc(sizeof(int) * (queue->rear - queue->front + 1));
    int index = 0;
    for (int i = queue->front; i <= queue->rear; i++) {
        result[index] = queue->array[i];
        index++;
    }
    *length = index;
    return result;
}
