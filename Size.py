def size(self):
    if self.is_empty():
        return 0
    return self.rear - self.front + 1
