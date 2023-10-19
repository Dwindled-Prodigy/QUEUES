def find(self, item):
    if self.is_empty():
        return -1  # Queue is empty; item cannot be found.
    for i in range(self.front, self.rear + 1):
        if self.array[i] == item:
            return i - self.front  # Item found at position 'i - self.front'.
    return -1  # Item not found in the queue.
