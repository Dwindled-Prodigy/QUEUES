def reverseQueue(self):
    if self.is_empty():
        return
    left = self.front
    right = self.rear
    while left < right:
        self.array[left], self.array[right] = self.array[right], self.array[left]
        left += 1
        right -= 1
