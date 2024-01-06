#include<bits/stdc++.h>
using namespace std;
int arr[10],front=-1,rear=-1,num;
void push_back();
void push_front();
void pop_back();
void pop_front();
void display();
int main()
{
    int ch;
    while(1)
    {
    cout<<"ENTER CHOICE\n1. PUSH IN FRONT 1\n2. PUSH IN BACK 1\n3. POP IN FRONT 1\n4. POP IN BACK 1\n5. DISPLAY QUEUE\n6 EXIT\n-----------\n";
    cin>>ch;
    switch (ch)
    {
        case 1:
        push_back();
        break;
        
        case 3:
        pop_front();
        break;

        case 4:
        pop_back();
        break;
        
        case 2:
        push_front();
        break;
        
        case 5:
        display();
        break;
       
        case 6:
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
    if((rear+1)%10==front)
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
        rear=(rear+1)%10;
        arr[rear]=num;
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
        cout<<"Queue is already empty\n";
    }
    else
    {
        cout<<arr[front]<<" deleted\n";
        front=(front+1)%10;
    }
}
void push_front()
{
    if((rear+1)%10==front)
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
        arr[front]=num;
    }
    else
    {
        front=(front-1)%10;
        if(front<0)
        {
            front=10+front;
        }
        arr[front]=num;
    }
    }
}
void pop_back()
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
        cout<<arr[rear]<<" deleted\n";
        rear=(rear-1)%10;
        if(rear<0)
        {
            rear=10+rear;
        }
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
        int i=front;
        while(i!=rear)
        {
            cout<<arr[i]<<" ";
            i=(i+1)%10;
        }
    cout<<endl;
    }
}