int peek() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot peek." << endl;
        return -1;  // Return a sentinel value to indicate an empty queue
    }
    return array[front];
}
