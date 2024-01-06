/*  
    Destructor is an instance function of a class
    Name of destructor is same as class name but preceeded by (~) symbol
    Destructor can never be static
    Destructor has no return type
    Destructor take no argument
    It should be defined to release resources allocated to an object
    It is invoked implicitly when object is going to destroy
*/

#include<iostream>   
#include<stdlib.h>    
using namespace std;


class complex
{
    private:
    int a,b;

    public:
    ~complex()
    {
        cout<<"Destructor";
    }
};
void fun()
{
    complex c1;
}

int main()
{
   
    fun();

}