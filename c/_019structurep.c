//structure is user defined data type

#include<stdio.h>
#include<string.h>
void method1();
void method2();
void method3();
void method4();

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    //Methods of intialization in structure
    method1();
    method2();
    method3();
    method4();
    return 0;
}

void method1()
{
    struct student s1;
    s1.roll=50;
    s1.cgpa=92.5;
  //s1.name="Rishav";   <--Not a valid method since declaration is for array and not pointer
    strcpy(s1.name,"Rishav");

    printf("Name : %s \n",s1.name);
    printf("Roll : %d \n",s1.roll);
    printf("CGPA : %f \n",s1.cgpa);
    printf("\n");
}

void method2()
{
    struct student s2={51,91.5,"Pratima"};
    printf("Name : %s \n",s2.name);
    printf("Roll : %d \n",s2.roll);
    printf("CGPA : %f \n",s2.cgpa);
    printf("\n");
}

void method3()
{
    // STRUCTURE OF ARRAY
    struct student ece[10];
    struct student mca[10];
    struct student civil[10];

    ece[0].roll=52;
    ece[0].cgpa=99.5;
    strcpy(ece[0].name,"Shreyansh");

    printf("Name : %s \n",ece[0].name);
    printf("Roll : %d \n",ece[0].roll);
    printf("CGPA : %f \n",ece[0].cgpa);
    printf("\n");
}

void method4()
{
    //POINTER TO STRUCTURE
    struct student s2={53,74.5,"Bishal"};
    struct student *ptr= &s2;
   // *ptr= &s2;   <--Error
    printf("Name : %s \n",(*ptr).name);
    printf("Roll : %d \n",(*ptr).roll);
    printf("CGPA : %f \n",(*ptr).cgpa);   
    printf("\n");

    struct student s3={54,64.5,"Punit"};
    struct student *ptr1= &s3;
    printf("Name : %s \n",ptr1->name);
    printf("Roll : %d \n",ptr1->roll);
    printf("CGPA : %f \n",ptr1->cgpa);   //ARROW OPERATOR ALSO DOES THE SAME WORK
    printf("\n");
}