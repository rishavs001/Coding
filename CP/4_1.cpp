/*
Define a class IntStack with data members top and a pointer to integers. The class
also has the following member functions:
i. IntStack() : Default constructor, dynamically allocate memory of 10 integers and
set the top to -1.
ii. IntStack(size) : Parameterized constructor, dynamically allocate the memory of
‘size’ integers and set top to -1.
iii. IntStack(const IntStack &): copy constructor , create memory for called object ,
copies the data from argument object , and update top variable.
iv. int pop(): pop up and returns the topmost element of the stack.
v. void push(int val) : push the value to the stack.
*/

#include<bits/stdc++.h>
using namespace std;
class IntStack
{
    int *p;
    int top;
    public:
    IntStack()
    {
        p= new int[10];
        top=-1;
    }
    IntStack(size)
    {
        p= new int[size];
        top=-1;
    }
    IntStack(const IntStack &x)
    {
        p=new int[x.top+1];
        for(int i=0;i<=x.top;i++)
        {
            p[i]=x.p[i];
        }
        top=x.top;
    }
    void push(int val)
    {
        p[++top]=val;
    }
    int pop()
    {
        top--;
        return p[top];
    }
    void display()
    {
        
    }

};

int main()
{
    IntStack p1(20);
    IntStack p2=p1;

    return 0;
}