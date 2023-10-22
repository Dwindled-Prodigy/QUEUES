void mergeQueues(Queue &queue2) {
    while (!queue2.isEmpty() && !isFull()) {
        enqueue(queue2.dequeue());
    }
}
