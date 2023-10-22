def copyQueue(self):
    new_queue = Queue()
    for i in range(self.front, self.rear + 1):
        new_queue.enqueue(self.array[i])
    return new_queue
