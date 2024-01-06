/*  
    CONSTRUCTOR IS A MEMBER FUNCTION OF A CLASS
    NAME OF CONSTRUCTOR IS SAME AS CLASS NAME
    IT HAS NO  RETURN TYPE, SO CAN'T USE RETURN KEYWORD
    IT MUST BE AN INSTANCE MEMBER FUNCTION, THAT IS , IT CAN NEVER BE STATIC

    constructor is called every time a new object is declared
    compiler makes a default and a copy constructor by default if no constructor is defined


*/
#include<iostream>   
#include<stdlib.h>    
using namespace std;


class complex
{
    private:
    int a,b;

    public:
    complex(int x, int y)   //parameterized constructor
    {
        a=x;
        b=y;
    }
    complex(const complex &ob)  //copy constructor
    {
        a=ob.a;
        b=ob.b;
    }

     void show_data()
    {
        cout<<a <<" "<<b<<endl;
    }
};

int main()
{
   
    complex c1(3,4);
    complex c2=c1;
    c1.show_data();

    c2.show_data();
    return 0;
   // getch();
}