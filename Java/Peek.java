public int peek() {
    if (isEmpty()) {
        System.out.println("Queue is empty. Cannot peek.");
        return -1;  // Return a sentinel value to indicate an empty queue
    }
    return array.get(front);
}
