def swap(self, position1, position2):
    if self.is_empty() or position1 < 0 or position2 < 0 or position1 > self.rear - self.front or position2 > self.rear - self.front:
        print("Invalid positions for swap.")
        return

    index1 = self.front + position1
    index2 = self.front + position2
    self.array[index1], self.array[index2] = self.array[index2], self.array[index1]
