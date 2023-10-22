void remove(int item) {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot remove.\n";
        return;
    }
    int i, j;
    for (i = front, j = 0; i <= rear; i++, j++) {
        if (array[i] == item) {
            for (int k = i; k < rear; k++) {
                array[k] = array[k + 1];
            }
            rear--;
            return;
        }
    }
    cout << "Item not found in the queue.\n";
}
