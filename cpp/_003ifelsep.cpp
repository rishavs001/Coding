#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number \n";
    cin>>a;
   
    if(a%2==0)
    {
        cout<<"Even digit nummber \n";
    }
    else
    {
        cout<<"Odd digit number \n";
    }
    
    //ternary operator
    a%2==0 ? cout<<"Even digit nummber \n" : cout<<"Odd digit number \n";
  
    return 0;
}


/*
SAME AS C
*/