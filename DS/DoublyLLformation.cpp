#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node *prev;
    Node *next;
};

// Function to create a new node
Node* createNode(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to display the nodes of the DLL
void displayList(Node *head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node *head = createNode(1);
    Node *second = createNode(8);
    Node *third = createNode(3);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    displayList(head);
    return 0;
}
