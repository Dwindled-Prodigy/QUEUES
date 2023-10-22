void reverseQueue(struct Queue *queue) {
    if (isEmpty(queue)) {
        return;
    }
    int temp;
    int left = queue->front;
    int right = queue->rear;
    while (left < right) {
        temp = queue->array[left];
        queue->array[left] = queue->array[right];
        queue->array[right] = temp;
        left++;
        right--;
    }
}
