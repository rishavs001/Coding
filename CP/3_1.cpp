/*
Declare a class Number having one data member: num and consist of the
following member functions.
i. A default constructor
ii. A parameterized constructor
iii. A destructor ( that displays the statement “object destroyed for class Num”)
iv. Accesor functions : getNumber() to return the number
v. Mutator functions: changeNumber(int) to set the values of the number.
vi. bool isArmstrong() : to check whether num is an armstrong number.
vii. bool isPrime() : to test primality of the number
viii. int nextCoprime() : to compute and return next number in the number series
that is coprime with this number.
ix. int reverse() : to reverse the numbe
*/
#include<bits/stdc++.h>
using namespace std;

class Number
{
    int n;
    public:
    Number()
    {
        n=0;
    }
    Number(int num)
    {
        n=num;
    }
    ~Number()
    {
        cout<<"Object destroyed for class Num"<<endl;
    }
    int getNumber()
    {
        return n;
    }
    void changeNumber(int num)
    {
        n=num;
    }

};

int main()
{
    Number n1(7);
    //n1.getNumber();
    cout<<"n1: "<<n1.getNumber()<<endl;
    n1.changeNumber(8);
    cout<<"n1: "<<n1.getNumber()<<endl;
    return 0;
}