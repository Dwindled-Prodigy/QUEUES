public void reverseQueue() {
    if (isEmpty()) {
        return;
    }
    int left = front;
    int right = rear;
    while (left < right) {
        int temp = array.get(left);
        array.set(left, array.get(right));
        array.set(right, temp);
        left++;
        right--;
    }
}
