#include <iostream>
using namespace std;
class IntStack {
  private:
    int top;
    int *stackArray;
    int stackSize;
  public:
    IntStack() {
      stackSize=10;
      stackArray=new int[stackSize];
      top=-1;
    }
    IntStack(int size) {
      stackSize=size;
      stackArray=new int[stackSize];
      top=-1;
    }
    IntStack(const IntStack & other) {
      stackSize=other.stackSize;
      stackArray=new int[stackSize];
      top=other.top;
      for (int i=0;i<=top;i++) {
        stackArray[i]=other.stackArray[i];
      }
    }
    ~IntStack() {
      delete[]stackArray;
    }
    void push(int val) {
      if (top==stackSize-1) {
        cout<<"Stack is full!"<<endl;
      } else {
        top++;
        stackArray[top]=val;
      }
    }
    int pop() {
      int val;
      if (top==-1) {
        cout<<"Stack is empty!"<<endl;
        return -1;
      } else {
        val=stackArray[top];
        top--;
        return val;
      }
    }
};
int main() {
  int size;
  cout<<"Enter the size of the stack: ";
  cin>>size;
  IntStack myStack(size);
  int choice,val;
  do {
    cout<<"Enter 1 to push\n2 to pop\n0 to exit: ";
    cin>>choice;
    switch (choice) {
      case 1:
        cout<<"Enter a value to push: ";
        cin>>val;
        myStack.push(val);
        break;
      case 2:
        val=myStack.pop();
        if (val!=-1) {
          cout<<"Popped value: "<<val<<endl;
        }
        break;
      case 0:
        cout<<"Exiting..."<<endl;
        break;
      default:
        cout<<"Invalid choice!"<<endl;
        break;
    }
  } while (choice!=0);
  return 0;
}
