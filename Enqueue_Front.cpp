void enqueueFront(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue.\n";
    } else {
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + MAX_SIZE) % MAX_SIZE;
        }
        array[front] = value;
    }
}
