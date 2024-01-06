
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtHead(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == NULL) {
            tail = newNode;
        }
    }

    void insertAtTail(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = tail;
        if (tail != NULL) {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == NULL) {
            head = newNode;
        }
    }

    void deleteAtHead() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        if (head == NULL) {
            tail = NULL;
        }
    }

    void deleteAtTail() {
        if (tail == NULL) {
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        }
        delete temp;
        if (tail == NULL) {
            head = NULL;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtTail(3);
    dll.printList(); // output: 2 1 3
    dll.deleteAtHead();
    dll.deleteAtTail();
    dll.printList(); // output: 1
    return 0;
}