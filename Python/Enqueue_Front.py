def enqueueFront(self, value):
    if self.isFull():
        print("Queue is full. Cannot enqueue.")
    else:
        if self.isEmpty():
            self.front = 0
            self.rear = 0
        else:
            self.front = (self.front - 1 + MAX_SIZE) % MAX_SIZE
        self.array.insert(self.front, value)
