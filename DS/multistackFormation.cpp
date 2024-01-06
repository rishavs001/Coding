#include<bits/stdc++.h>
using namespace std;
void push1();
void pop1();
void peek1();
void push2();
void pop2();
void peek2();
void display();

int arr[10]={0},top1=-1,num,top2=10,n;
int main()
{
    int ch;
    while(1)
    {
    cout<<"ENTER CHOICE\n1. PUSH IN STACK 1\n2. POP IN STACK 1\n3. PEEK IN STACK 1\n4. PUSH IN STACK 2\n5. POP IN STACK 2\n6. PEEK IN STACK 2\n7. DISPLAY\n8. EXIT\n-----------\n";
    cin>>ch;
    switch (ch)
    {
        case 1:
        push1();
        break;
        
        case 2:
        pop1();
        break;
        
        case 3:
        peek1();
        break;
        
        case 4:
        push2();
        break;
        
        case 5:
        pop2();
        break;
        
        case 6:
        peek2();
        break;
        
        case 7:
        display();
        break;
        
        case 8:
        cout<<"Exited";
        exit(1);
        break;
        
        default:
        cout<<"Wrong choice";
    }
    }
    return 0;
}

void push1()
{
    if(top1==top2-1)
    {
        cout<<"Stack 1 is full\n";
    }
    else
    {
    cout<<"Enter element to push\n";
    cin>>n;
    arr[++top1]=n;
    }
}
void pop1()
{
   if(top1==-1)
    {
        cout<<"Stack 1 is empty\n";
        
    }
    else
    {
    cout<<arr[top1]<<" deleted\n";

    top1--;
    }
}
void peek1()
{
   if(top1==-1)
    {
        cout<<"Stack 1 is empty\n";
        
    }
    else{
    cout<<"Top element of stack 1 is "<<arr[top1]<<endl;
    }
}
void push2()
{
    if(top1==top2-1)
    {
        cout<<"Stack 2 is full\n";
    }
    else
    {
    cout<<"Enter element to push\n";
    cin>>n;
    arr[--top2]=n;
    }
}
void pop2()
{
   if(top2==10)
    {
        cout<<"Stack 2 is empty\n";
        
    }
    else
    {
    cout<<arr[top2]<<" deleted\n";

    top2++;
    }
}
void peek2()
{
   if(top2==10)
    {
        cout<<"Stack is empty\n";
        
    }
    else{
    cout<<"Top element is "<<arr[top2]<<endl;

    }
}
void display()
{
    cout<<"Which stack to display 1 or 2\n";
    cin>>num;
    if(num==1)
    {
    for(int i=top1;i>0;i--)
    {
        cout<<arr[i]<<" ";
    }
    }
    else if(num==2)
    {
    for(int i=top2;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    cout<<endl;
}