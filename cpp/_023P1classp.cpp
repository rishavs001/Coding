/*
        ADD 2 COMPLEX NUMBERS
*/
#include<iostream>   
using namespace std;


class complex{
    private:         
    int a,b;

  public:
    void set_data(int x, int y);
    void show_data()
    {
    cout<<"a= "<<a<<"\nb= "<<b;
    
    }

    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }

};

void complex::set_data(int x, int y)        //Class function definition outside classs

    {   
     a=x;
     b=y;
    }


int main()
{
    complex c1,c2,c3;         //c1 is an object and not a variable;
    c1.set_data(3,4);
    c2.set_data(5,8);
    c3=c1.add(c2);
    c3.show_data();
}




