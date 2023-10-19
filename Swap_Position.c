void swap(struct Queue *queue, int position1, int position2) {
    if (isEmpty(queue) || position1 < 0 || position2 < 0 || position1 > queue->rear - queue->front || position2 > queue->rear - queue->front) {
        printf("Invalid positions for swap.\n");
        return;
    }

    int index1 = queue->front + position1;
    int index2 = queue->front + position2;
    int temp = queue->array[index1];
    queue->array[index1] = queue->array[index2];
    queue->array[index2] = temp;
}
