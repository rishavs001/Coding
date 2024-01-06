/*
    ****Operate overloading****
        ADD 2 COMPLEX NUMBERS

        ANY SYMBOL CAN BE USED AS A FUNCTION NAME
            >IT IS A VALID OPERATOR IN C
            >IT IS PREECEDED BY 'OPERATOR' KEYWORD
        YOU CANNOT OVERLOAD sizeOf and ?: operator
*/
#include<iostream>   
#include<conio.h>    
using namespace std;


class complex{
    private:         
    int a,b;

  public:
    void set_data(int x, int y);
    void show_data()
    {
    cout<<"a= "<<a<<"\nb= "<<b<<endl;
    
    }

    complex operator +(complex c)           //USING OPERATOR AS FUNCTION NAME
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=a+c.b;
        return(temp);
    }

    complex operator -()           //for unary operator
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
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
    complex c1,c2,c3,c4;         //c1 is an object and not a variable;
    c1.set_data(3,4);
    c2.set_data(5,8);
    c3=c1.operator +(c2);       //for binary operator
    /*
        Also write as:
        c3=c1 + c2;
    */
   c4=c1.operator -();        //for unary operator
   /*
        Also write as:
        c3=-c1;
    */
    c3.show_data();
    c4.show_data();

    getch();
}




