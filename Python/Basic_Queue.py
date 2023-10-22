MAX_SIZE = 100

class Queue:
    def __init__(self):
        self.array = []
        self.front = -1
        self.rear = -1

    def is_empty(self):
        return self.front == -1

    def is_full(self):
        return self.rear == MAX_SIZE - 1

    def enqueue(self, value):
        if self.is_full():
            print("Queue is full. Cannot enqueue.")
        else:
            if self.is_empty():
                self.front = 0
            self.rear += 1
            self.array.append(value)

    def dequeue(self):
        if self.is_empty():
            print("Queue is empty. Cannot dequeue.")
        else:
            front_value = self.array[self.front]
            print(f"Dequeued element: {front_value}")
            if self.front == self.rear:
                self.front = -1
                self.rear = -1
            else:
                self.front += 1

    def display(self):
        if self.is_empty():
            print("Queue is empty.")
        else:
            print("Queue elements: ", end="")
            for i in range(self.front, self.rear + 1):
                print(self.array[i], end=" ")
            print()

if __name__ == "__main__":
    queue = Queue()

    size = int(input("Enter the size of the queue: "))

    if size <= 0 or size > MAX_SIZE:
        print(f"Invalid queue size. Please choose a size between 1 and {MAX_SIZE}.")
        exit(1)

    while True:
        print("\nQueue Operations:")
        print("1. Enqueue")
        print("2. Dequeue")
        print("3. Display")
        print("4. Quit")
        choice = int(input("Enter your choice: "))

        if choice == 1:
            if queue.is_full():
                print("Queue is full. Cannot enqueue.")
            else:
                item = int(input("Enter the item to enqueue: "))
                queue.enqueue(item)
        elif choice == 2:
            queue.dequeue()
        elif choice == 3:
            queue.display()
        elif choice == 4:
            print("Exiting the program.")
            exit(0)
        else:
            print("Invalid choice. Please try again.")
