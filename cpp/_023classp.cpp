/*
    ADDITIONAL FEATURES
    ->CLASS IS MOSTLY SAME AS STRUCTURE
    ->THE DIFFERENCE IS THA INSIDE STRUCTURE ALL VARIABLES AND FUNCTIONS A RE BY DEFAULT PUBLIC
        BUT IS CLASS ALL VARIABLE AND FUNCTIONS ARE BY DEFAULT PRIVATE
*/
#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;

/*
        ****Incase we want to define a class function inside class ****
            ***This method is same as structure***
class complex{
   private:         // to prevent outside accessiblity entries against policy
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

};

*/

/*
        ****Incase we want to define a class function outside class ****
*/

    class complex{
    private:         
    int a,b;

  public:
    void set_data(int x, int y);
    


    void show_data()
    {
    cout<<"a= "<<a<<"\nb= "<<b;
    
    }

};

void complex::set_data(int x, int y)        //Class function definition outside classs

    {   
     a=x;
     b=y;
    }




int main()
{
    complex c1;         //c1 is an object and not a variable;
    c1.set_data(3,4);
    c1.show_data();
    
    getch();
}




