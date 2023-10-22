def toArray(self):
    result = []
    if self.is_empty():
        return result
    for i in range(self.front, self.rear + 1):
        result.append(self.array[i])
    return result
