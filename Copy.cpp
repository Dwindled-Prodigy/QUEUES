Queue copyQueue() {
    Queue newQueue;
    newQueue.front = -1;
    newQueue.rear = -1;
    for (int i = front; i <= rear; i++) {
        newQueue.enqueue(array[i]);
    }
    return newQueue;
}
