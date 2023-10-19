def remove(self, item):
    if self.is_empty():
        print("Queue is empty. Cannot remove.")
        return
    i = self.front
    while i <= self.rear:
        if self.array[i] == item:
            for j in range(i, self.rear):
                self.array[j] = self.array[j + 1]
            self.rear -= 1
            return
        i += 1
    print("Item not found in the queue.")
