bool search(int item) {
    if (isEmpty()) {
        return false;  // Queue is empty; item cannot be found.
    }
    for (int i = front; i <= rear; i++) {
        if (array[i] == item) {
            return true;  // Item found in the queue.
        }
    }
    return false;  // Item not found in the queue.
}
