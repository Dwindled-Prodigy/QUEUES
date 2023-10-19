public void swap(int position1, int position2) {
    if (isEmpty() || position1 < 0 || position2 < 0 || position1 > rear - front || position2 > rear - front) {
        System.out.println("Invalid positions for swap.");
        return;
    }

    int index1 = front + position1;
    int index2 = front + position2;
    int temp = array.get(index1);
    array.set(index1, array.get(index2));
    array.set(index2, temp);
}
