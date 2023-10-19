class ListNode {
    int data;
    ListNode next;

    public ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}

public ListNode toLinkedList() {
    if (isEmpty()) {
        return null;
    }
    ListNode head = null;
    ListNode tail = null;
    for (int i = front; i <= rear; i++) {
        ListNode newNode = new ListNode(array.get(i));
        if (tail == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
    }
    return head;
}
