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


class Integer{
    private:         
    int x;

  public:
    void set_data(int a);
    void show_data()
    {
    cout<<"x= "<<x<<endl;
    
    }

    Integer operator ++()           //PRE INCREMENT
    {
        Integer temp;
        temp.x=++x;
        return(temp);
    }

    Integer operator ++(int)           //POST INCREMENT
    {
        Integer temp;
        temp.x=x++;
        return(temp);
    }


   
};

void Integer::set_data(int a)        //Class function definition outside classs

    {   
     x=a;
    }




int main()
{
    
    Integer c1,c2,c3;         
    c1.set_data(3);
    c1.show_data();
    c2=c1++;     //c2=c1.operator ++();
    c1.show_data();
    c2.show_data();
    c3=++c1;     //c2=c1.operator ++();
    c1.show_data();
    c3.show_data();
  
 
}
