def sort(self):
    n = self.rear - self.front + 1
    if n <= 1:
        return  # Queue is already sorted

    swapped = True
    while swapped:
        swapped = False
        for i in range(self.front, self.rear):
            if self.array[i] > self.array[i + 1]:
                # Swap elements
                self.array[i], self.array[i + 1] = self.array[i + 1], self.array[i]
                swapped = True
