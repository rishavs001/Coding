#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *next;
};

// Stack class
class Stack {
private:
    Node *top;

public:
    Stack() {
        top = NULL;
    }

    
    void push(int x) {
        Node *temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    // Pop the top element from the stack
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
        cout<< " Popped"<< endl;
    }

    // Get the top element of the stack
    int getTop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top == NULL);
    }
};


int main() {
    Stack s;
    int n,ch,num;
    while(1)
    {
    cout<<"ENTER CHOICE\n1. PUSH\n2. POP\n3. PEEK\n4. EXIT\n-----------\n";
    cin>>ch;
    switch (ch)
    {
        case 1:
        cout<<"Enter element to input: ";
        cin>>num;
         s.push(num);
        break;
        
        case 2:
        s.pop();
        break;
        
        case 3:
        cout << "Top element: " << s.getTop() << endl;;
        break;
        
        case 4:
        cout<<"Exited";
        exit(1);
        break;
        
        default:
        cout<<"Wrong choice";
    }
    }
    
    
   
    
    
    return 0;
}