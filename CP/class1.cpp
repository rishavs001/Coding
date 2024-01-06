#include<iostream>
using namespace std;
class InStack
{
    int Top;
    int * ptr;

public:

    InStack()
    {
        Top=-1;
        ptr = new int[10];
    }

     InStack(int size)
    {
        Top=-1;
        ptr=new int[size];
    }

    Instack(const InStack & obj)
    {
        Top= obj.Top;
        this->ptr=ptr;
    }

    void push(int val)
    {
        Top++;
        ptr[Top]=val;
    }

    int pop()
    {
        Top--;
        return ptr[Top];
    }
    void display()
    {
        for(int i=0;i<=Top;i++)
        {
            cout<<ptr[i]<<"--->";
        }
        cout<<endl;
    }
};
int main()
{
    return 0;
}