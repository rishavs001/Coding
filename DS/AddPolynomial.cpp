
#include <iostream>
using namespace std;

class Node {
public:
    int coef;
    int exp;
    Node* next;
};

class Polynomial {
private:
    Node* head;

public:
    Polynomial() {
        head = NULL;
    }

    void addTerm(int coef, int exp) {
        Node* newNode = new Node();
        newNode->coef = coef;
        newNode->exp = exp;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    Polynomial add(Polynomial other) {
        Polynomial result;
        Node* current1 = head;
        Node* current2 = other.head;
        while (current1 != NULL && current2 != NULL) {
            if (current1->exp > current2->exp) {
                result.addTerm(current1->coef, current1->exp);
                current1 = current1->next;
            }
            else if (current2->exp > current1->exp) {
                result.addTerm(current2->coef, current2->exp);
                current2 = current2->next;
            }
            else {
                result.addTerm(current1->coef + current2->coef, current1->exp);
                current1 = current1->next;
                current2 = current2->next;
            }
        }
        while (current1 != NULL) {
            result.addTerm(current1->coef, current1->exp);
            current1 = current1->next;
        }
        while (current2 != NULL) {
            result.addTerm(current2->coef, current2->exp);
            current2 = current2->next;
        }
        return result;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->coef << "x^" << temp->exp << " + ";
            temp = temp->next;
        }
        cout << "0" << endl;
    }
};

int main() {
    Polynomial p1, p2;
    p1.addTerm(2, 3);
    p1.addTerm(1, 2);
    p1.addTerm(3, 0);
    p2.addTerm(3, 3);
    p2.addTerm(2, 1);
    Polynomial p3 = p1.add(p2);
    p1.print(); 
    p2.print(); 
    p3.print(); 
    return 0;
}