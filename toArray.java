public int[] toArray() {
    if (isEmpty()) {
        return new int[0];
    }
    int[] result = new int[rear - front + 1];
    int index = 0;
    for (int i = front; i <= rear; i++) {
        result[index] = array.get(i);
        index++;
    }
    return result;
}
