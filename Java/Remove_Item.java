public void remove(int item) {
    if (isEmpty()) {
        System.out.println("Queue is empty. Cannot remove.");
        return;
    }
    for (int i = front; i <= rear; i++) {
        if (array.get(i) == item) {
            array.remove(i);
            rear--;
            return;
        }
    }
    System.out.println("Item not found in the queue.");
}
