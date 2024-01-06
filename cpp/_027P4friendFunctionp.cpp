/*
    Member function of one class can become friend to another class
*/

#include<iostream>   
#include<conio.h>    
using namespace std;

class A
{
    public:
     void fun()
     {/*some code*/}
     void fun2()
     {/*some code*/}

};

class B
{
    friend class A;     //To make all the functions of A, friend function of B
    friend void A :: fun(); //To make particular function of A, friend function of B
};


int main()
{
    /*some code*/
}