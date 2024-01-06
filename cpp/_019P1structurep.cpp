/*
    ADDITIONAL FEATURES
    ->FUNCTIONS CAN ALSO BE DECLARED WITH VARIABLES INSIDE STRUCTURE
    ->We can assign private, public, protected to desired variables and functions inside structure in cpp 
*/
#include<iostream>   //cin,cout
#include<conio.h>    //clrscr(),getch()
using namespace std;
struct student{
   private:         // to prevent outside accessiblity entries against policy
    int roll;
    float cgpa;
    char name[100];
  public:
    void input()
    {   
    cout<<"Enter roll, cgpa and name \n";
    cin>>roll>>cgpa>>name;
    if(roll<0)
    roll=-roll;     //Adding filters
    
    printf("\n");
    }

    void display()
    {
    cout<<"Name :  "<<name;
    cout<<"\nRoll : "<<roll;
    cout<<"\nCGPA : "<<cgpa;
    printf("\n");
    }

};
int main()
{
    //Methods of intialization in structure
    //method1();
    student s1;
    s1.input();
    s1.display();   
    getch();
}