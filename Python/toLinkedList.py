class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

def toLinkedList(self):
    if self.is_empty():
        return None
    head = None
    tail = None
    for i in range(self.front, self.rear + 1):
        new_node = ListNode(self.array[i])
        if tail is None:
            head = new_node
            tail = new_node
        else:
            tail.next = new_node
            tail = new_node
    return head
