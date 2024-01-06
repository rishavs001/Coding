/*
    Using friend function instead of operator overloading
*/
#include<iostream>   
#include<conio.h>    
using namespace std;


class complex{
    private:         
    int a,b;

  public:
    void set_data(int x, int y)
    {   
     a=x;
     b=y;
    }

    void show_data()
    {
    cout<<"a= "<<a<<"\nb= "<<b<<endl;
    
    }

    friend complex operator +(complex , complex );
    friend complex operator -(complex );
   
};
    complex operator +(complex X, complex Y)           
    {
        complex temp;
        temp.a=X.a+Y.a;
        temp.b=X.b+Y.b;
        return(temp);
    }
    complex operator -(complex X)           //for unary operator
    {
        complex temp;
        temp.a=-X.a;
        temp.b=-X.b;
        return(temp);
    }


int main()
{
    complex c1,c2,c3,c4;         
    c1.set_data(3,4);
    c2.set_data(5,8);
    c3=c1+c2;       //c3=operator +(c1,c2)
    c4=-c1;          //c2.operator -(c1)
    c3.show_data();
    c4.show_data();
    getch();
}




