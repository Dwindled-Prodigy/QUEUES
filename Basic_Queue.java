import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Queue {
    private static final int MAX_SIZE = 100;
    private List<Integer> array;
    private int front, rear;

    public Queue() {
        array = new ArrayList<>();
        front = -1;
        rear = -1;
    }

    public boolean isEmpty() {
        return (front == -1);
    }

    public boolean isFull() {
        return (rear == MAX_SIZE - 1);
    }

    public void enqueue(int value) {
        if (isFull()) {
            System.out.println("Queue is full. Cannot enqueue.");
        } else {
            if (isEmpty()) {
                front = 0;
            }
            rear++;
            array.add(value);
        }
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty. Cannot dequeue.");
        } else {
            int frontValue = array.get(front);
            System.out.println("Dequeued element: " + frontValue);

            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty.");
        } else {
            System.out.print("Queue elements: ");
            for (int i = front; i <= rear; i++) {
                System.out.print(array.get(i) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Queue queue = new Queue();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the queue: ");
        int size = scanner.nextInt();

        if (size <= 0 || size > MAX_SIZE) {
            System.out.println("Invalid queue size. Please choose a size between 1 and " + MAX_SIZE + ".");
            System.exit(1);
        }

        int choice;

        while (true) {
            System.out.println("\nQueue Operations:");
            System.out.println("1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Display");
            System.out.println("4. Quit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    if (queue.isFull()) {
                        System.out.println("Queue is full. Cannot enqueue.");
                    } else {
                        int item;
                        System.out.print("Enter the item to enqueue: ");
                        item = scanner.nextInt();
                        queue.enqueue(item);
                    }
                    break;
                case 2:
                    queue.dequeue();
                    break;
                case 3:
                    queue.display();
                    break;
                case 4:
                    System.out.println("Exiting the program.");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
