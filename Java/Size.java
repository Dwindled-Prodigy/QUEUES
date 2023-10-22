public int size() {
    if (isEmpty()) {
        return 0;
    }
    return rear - front + 1;
}
