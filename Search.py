def search(self, item):
    if self.is_empty():
        return False  # Queue is empty; item cannot be found.
    for i in range(self.front, self.rear + 1):
        if self.array[i] == item:
            return True  # Item found in the queue.
    return False  # Item not found in the queue.
