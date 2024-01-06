/*
    Friend function is not a member of a class to which it is a friend
    It is declared in the class with friend keyword
    It must be defined outside the class to which it is friend
    it can access any member of the class to which it is friend
    It cannot access members of the class directly
    It should not be defined with membership label
*/


#include<iostream>   //cin,cout
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
    cout<<"a= "<<a<<"\nb= "<<b;   
    }


   friend void fun(complex);

};

 void fun(complex c)
    {
        cout<<"Sum is: "<<c.a+c.b<<endl;
    }

int main()
{
    complex c1;         //c1 is an object and not a variable;
    c1.set_data(3,4);
    fun(c1);
    //c1.show_data();
    
    return 0;
}




