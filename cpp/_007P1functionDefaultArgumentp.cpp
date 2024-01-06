/* Default Argument */

#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;

int add(int,int,int=0);  
//int add(int,int=0,int=0);  <--initializing from right always


int main()
{
    
   // clrscr();
   int a,b;
    cout<< "Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<< "Sum is "<<add(a,b)<<endl;  

    int c;
    cout<< "Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    cout<< "Sum is "<<add(a,b,c)<<endl;
    getch();
}


// int add(int x,int y)  
// {
//    return (x+y);
// }

int add(int x,int y,int z)  
{
   return (x+y+z);
}


