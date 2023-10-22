public Queue copyQueue() {
    Queue newQueue = new Queue();
    for (int i = front; i <= rear; i++) {
        newQueue.enqueue(array.get(i));
    }
    return newQueue;
}
