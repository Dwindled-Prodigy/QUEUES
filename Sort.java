public void sort() {
    int n = rear - front + 1;
    if (n <= 1) {
        return;  // Queue is already sorted
    }

    int swapped;
    int temp;
    do {
        swapped = 0;
        for (int i = front; i < rear; i++) {
            if (array.get(i) > array.get(i + 1)) {
                // Swap elements
                temp = array.get(i);
                array.set(i, array.get(i + 1));
                array.set(i + 1, temp);
                swapped = 1;
            }
        }
    } while (swapped);
}
