#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node *next;
};

// Queue class
class Queue {
private:
    Node *front;
    Node *rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Enqueue a new element to the rear of the queue
    void enqueue(int x) {
        Node *temp = new Node;
        temp->data = x;
        temp->next = NULL;
        if (front == NULL && rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    // Dequeue the front element from the queue
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            front = rear = NULL;
        } else {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    // Get the front element of the queue
    int getFront() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    // Get the rear element of the queue
    int getRear() {
        if (rear == NULL) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return rear->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == NULL && rear == NULL);
    }
};

// Main function
int main() {
    Queue q;
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
    q.dequeue();
    cout << "Front element: " << q.getFront() << endl;
    q.dequeue();
    cout << "Front element: " << q.getFront() << endl;
    q.dequeue();
    cout << "Queue is empty: " << q.isEmpty() << endl;
    return 0;
}
