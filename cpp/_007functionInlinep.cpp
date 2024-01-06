/* ****INLINE FUNCTION ****
    To eliminate the cost of calls to small functions,c++PROPOSES A NEW FEATURE CALLED INLINE FUNCTION.
    AN INLINE FUNCTION IS A FUNCTION THAT IS EXPANDED IN LINE WHEN IT IS INVOKED.
    COMPILER REPLACES THE FUNCTION CALL WITH THE CORRESPONDING FUNCTION CODE.
*/

#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;

inline void fun();  //function declaration

int main()
{
   
    cout<< "Hello Rishav"<<endl;
    fun();  //function call

    getch();
}


void fun()  //function definition
{
    cout<<"This is an inline function";
}

