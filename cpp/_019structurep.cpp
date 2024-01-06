/*
        ->STRUCT KEYWORD IS NOT ALWAYS REQUIRES WHILE DECLARING VARIABLES
        ->FUNCTIONS WITH STRUCTURE DATA TYPE CAN BE CREATED
*/

#include<bits/stdc++.h>   //cin,cout
//#include<conio.h>    //clrscr(),getch()
using namespace std;
//void method1();

struct student{
    int roll;
    float cgpa;
    string name;
}S8;        //ALSO A WAY OF  DECLARING STRUCTURE VARIABLE 

student method2();
void display(student);


int main()
{
    //Methods of intialization in structure
    //method1();
    student b2;
    b2=method2();
    display(b2);
    //method2();
    
    return 0;
   // getch();
}
/*
void method1()
{
    student s1; //writing struct first is not mandatory in CPP.
    s1.roll=50;
    s1.cgpa=92.5;
  //s1.name="Rishav";  // <--Not a valid method since declaration is for array and not pointer
    strcpy(s1.name,"Rishav");

    cout<<"Name :  \n"<<s1.name;
    cout<<"Roll : \n"<<s1.roll;
    cout<<"CGPA : \n"<<s1.cgpa;
    printf("\n");
}
*/
student method2()
{
    //student s2;
    student s2={51,91.5,"Pratima"};
    return(s2);
}

void display(student s)
{


    cout<<"Name :  "<<s.name;
    cout<<"\nRoll : "<<s.roll;
    cout<<"\nCGPA : "<<s.cgpa;
    printf("\n");
}
