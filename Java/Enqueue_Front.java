public void enqueueFront(int value) {
    if (isFull()) {
        System.out.println("Queue is full. Cannot enqueue.");
    } else {
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + MAX_SIZE) % MAX_SIZE;
        }
        array.add(front, value);
    }
}
