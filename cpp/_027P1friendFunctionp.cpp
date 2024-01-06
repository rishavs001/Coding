/*
    Friend function can become friend to more than one class
*/

#include<iostream>
#include<conio.h>
using namespace std;
class B;

class A
{
    private:
    int a;
    public:
    void setData(int x)
    {a=x;}
    friend void fun(A,B);
};

class B
{
    private:
    int b;
    public:
    void setData(int y)
    {b=y;}
    friend void fun(A,B);
};

void fun(A obj1, B obj2)
{
    cout<<"Sum is "<< obj1.a+obj2.b;
}

int main()
{
    A obj1;
    B obj2;
    obj1.setData(2);
    obj2.setData(3);
    fun(obj1,obj2);

    getch();
}