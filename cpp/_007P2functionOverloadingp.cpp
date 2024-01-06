/*  **** FUNCTION OVERLOADING **** 
    FIRST C++ TRIES TO MATCH OF THE PARAMETERS
    IF NOT FOUND, C++ FINDS A MATCH THROUGH PROMOTION
        - CHAR, UNSIGNED CHAR AND SHORT IS PROMOTED TO AN INT.
        - FLOAT IS PROMOTED TO DOUBLE.
    IF NO PROMOTION IS FOUND, C++ TRIES TO FIND A MATCH THROUGH STANDARD CONVERSION
*/

#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;

int area(int, int);
float area(int);
int main()
{
  //  clrscr();
  int r;
  cout<<"Enter radius of a circle \n";
  cin>>r;
  float A=area(r);
  cout<<"\nArea of circle is "<<A<<endl;

    int l,b,a;
    cout<<"Enter length and breadth of a rectangle \n"<<endl;
    cin>>l>>b;
    a=area(l,b);
    cout<<"\nArea of rectangle is "<<a<<endl;

   // getch();

}

float area(int r)
{
    return(3.14*r*r);
}

int area(int l, int b)
{
    return(l*b);
}