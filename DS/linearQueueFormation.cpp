#include<bits/stdc++.h>
using namespace std;
int arr[5],front=-1,rear=-1,num;
void push_back();
void pop_front();
void display();
int main()
{
    int ch;
    while(1)
    {
    cout<<"ENTER CHOICE\n1. PUSH IN QUEUE 1\n2. POP IN QUEUE 1\n3. DISPLAY QUEUE\n4. EXIT\n-----------\n";
    cin>>ch;
    switch (ch)
    {
        case 1:
        push_back();
        break;
        
        case 2:
        pop_front();
        break;
        
        case 3:
        display();
        break;
       
        case 4:
        cout<<"Exited\n";
        exit(1);
        break;
        
        default:
        cout<<"Wrong choice\n";
    }
    }
    return 0;
}
void push_back()
{
    if(front==0 && rear==10-1)
    {
        cout<<"Queue is full\n";
    }
    else
    {
        cout<<"Enter number to push\n";
        cin>>num;
        if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        arr[rear]=num;
    }
    else
    {
        arr[++rear]=num;
    }
    }
}
void pop_front()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is already empty\n";
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
        cout<<"Queue is now empty\n";
    }
    else
    {
        cout<<arr[front]<<" deleted\n";
        front+=1;
    }
}
void display()
{
     if(front==-1 && rear==-1)
    {
        cout<<"Queue is  empty\n";
    }
    else
    {
    for(int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}