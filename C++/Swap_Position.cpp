void swap(int position1, int position2) {
    if (isEmpty() || position1 < 0 || position2 < 0 || position1 > rear - front || position2 > rear - front) {
        cout << "Invalid positions for swap." << endl;
        return;
    }

    int index1 = front + position1;
    int index2 = front + position2;
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}
