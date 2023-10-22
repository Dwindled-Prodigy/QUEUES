#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    vector<int> array;
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
        } else {
            if (isEmpty()) {
                front = 0;
            }
            rear++;
            array.push_back(value);
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            int frontValue = array[front];
            cout << "Dequeued element: " << frontValue << endl;

            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;

    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid queue size. Please choose a size between 1 and " << MAX_SIZE << "." << endl;
        return 1;
    }

    int choice;

    while (true) {
        cout << "\nQueue Operations:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (queue.isFull()) {
                    cout << "Queue is full. Cannot enqueue." << endl;
                } else {
                    int item;
                    cout << "Enter the item to enqueue: ";
                    cin >> item;
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
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
