#include<bits/stdc++.h>
using namespace std;
void push();
void pop();
void peek();

int arr[10],top=-1,n;
int main()
{
    int ch;
    while(1)
    {
    cout<<"ENTER CHOICE\n1. PUSH\n2. POP\n3. PEEK\n4. EXIT\n-----------\n";
    cin>>ch;
    switch (ch)
    {
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        peek();
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

void push()
{
    if(top==10)
    {
        cout<<"Stack is full\n";
    }
    else
    {
    cout<<"Enter element to push\n";
    cin>>n;
    arr[++top]=n;
    }
}
void pop()
{
   if(top==-1)
    {
        cout<<"Stack is empty\n";
        
    }
    else
    {
    cout<<arr[top]<<" deleted\n";

    top--;
    }
}
void peek()
{
   if(top==-1)
    {
        cout<<"Stack is empty\n";
        
    }
    else{
    cout<<"Top element is "<<arr[top]<<endl;


    }
}