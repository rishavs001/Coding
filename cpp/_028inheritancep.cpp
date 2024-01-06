/*/*
    Inheritance
        >It is a process of inheriting properties and behaviours of existing class into a new class
        >Existing class= old class= Parent class=Base class
        >New class= child class= Derived class

SYNTAX-->
    class Base_Class
    {

    };
    class Derived class : Visibility mode Base_class
    {

    };

TYPES OF INHERITANCE
    >Single Inheritance
    >Multilevel Inheritance
    >Multiple Inheritance
    >Hierarchical Inheritance
    >Hybrid Inheritance

>Single Inheritance
    class A
    {

    };
    class B : public A
    {

    };

>Multilevel Inheritance
    class A
    {

    };
    class B : public A
    {

    };
    class C: public B
    {

    };

>Multiple Inheritance
   class A
    {

    };
    class B
    {

    };
    class C: public A,public B
    {

    };

>Hierarchical Inheritance
    class A
    {

    };
    class B : public A
    {

    };
    class C: public A
    {

    };

VISIBILITY MODES
    >Private
    >Protected
    >Public

TYPES OF USERS OF A CLASS
    >User 1 will create object of your class
    >User 2 will derive class from your class

AVAILABILITY VS ACCESSIBILITY
*/
#include<iostream>   
#include<conio.h>    
using namespace std;
class A
{
    private:
    int a;
    protected:
    void setValue(int k)
    {
        a=k;
        cout<<a;
    }

};

class B: public A
{
    
    public:
    void setData(int x)
    {
        setValue(x);
    }
};
int main()
{
   B obj;
   obj.setData(4); 

   return 0;
}