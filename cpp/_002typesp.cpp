#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter numbers\n";
    cin>>a>>b;
    int c=a+b;
    cout<<"The sum of "<<a<<" and "<<b<<"is "<<c<<endl;
    /*
       -> Reference means address
        ->Referencde variable is an internal pointer
        ->Reference variable must be initialized during decaration
        ->It can be declared with only declared variables.
        ->It cannot be updated
    */
    int &j=c;  //j is a reference variable(decalared with & always)
    j++;
    cout<<c;
    getchar();
}