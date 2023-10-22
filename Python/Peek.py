def peek(self):
    if self.is_empty():
        print("Queue is empty. Cannot peek.")
        return None  # Return None to indicate an empty queue
    return self.array[self.front]
