public int find(int item) {
    if (isEmpty()) {
        return -1;  // Queue is empty; item cannot be found.
    }
    for (int i = front, position = 0; i <= rear; i++, position++) {
        if (array.get(i) == item) {
            return position;  // Item found at position 'position'.
        }
    }
    return -1;  // Item not found in the queue.
}
