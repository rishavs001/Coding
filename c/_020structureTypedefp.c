//Typedef reduces the pain of writing long statements. Replaces the long statement with a short name


#include<stdio.h>
#include<string.h>
void method1();

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;    //New structure name

int main()
{
    
    stu s1;   //Using the new datat type name
    s1.roll=50;
    s1.cgpa=92.5;
    strcpy(s1.name,"Rishav");

    printf("Name : %s \n",s1.name);
    printf("Roll : %d \n",s1.roll);
    printf("CGPA : %f \n",s1.cgpa);
    printf("\n");

    return 0;
}

