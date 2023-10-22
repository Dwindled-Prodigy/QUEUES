void sort(struct Queue *queue) {
    int n = queue->rear - queue->front + 1;
    if (n <= 1) {
        return;  // Queue is already sorted
    }

    int swapped;
    int temp;
    do {
        swapped = 0;
        for (int i = queue->front; i < queue->rear; i++) {
            if (queue->array[i] > queue->array[i + 1]) {
                // Swap elements
                temp = queue->array[i];
                queue->array[i] = queue->array[i + 1];
                queue->array[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}
