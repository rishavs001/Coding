/*  STATIC VARIABLE
    STATIC MEMBER VARIABLE
        >Declared inside class body
        >Also known as class member variable
        >Must be defined outside the class
        >Doesnot belong to any object , but to the whole class
        >There will be only  one copy of  static member variable for the whole class
        >Any object can use the same copy of class variable
        >They can also be used with class name
    STATIC MEMBER FUNCTION
*/
#include<iostream>   
#include<conio.h>    
using namespace std;

class account
{
    private:
    int balance;    //Instance member variable
    static float roi;       //Static member variable/ Class Variable

    public:
    void setBalance(int b)
    {
        balance =b;
    }
/*
 void setRoi(float r)     //In this case, an object(like a1,a2, etc) is required to pass the value
    {
        roi=r;
    }
*/

    static void setRoi(float r)     //Static Member Function
    {
        roi=r;
    }

    static void getRoi()     //Static Member Function
    {
        return roi;
    }
};

float account :: roi=3.5;        //Must be defined outside the class. If not  initialized, value 0 by default

void main()
{
    account a1,a2;

    //a1.setRoi(2.54);              //Using object in case of nonstatic function
    account:: setRoi(2.54);         //No object is required in case of static member function
    cout<<account::getroi();
}