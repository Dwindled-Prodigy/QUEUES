void reverseQueue() {
    if (isEmpty()) {
        return;
    }
    int left = front;
    int right = rear;
    while (left < right) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left++;
        right--;
    }
}
