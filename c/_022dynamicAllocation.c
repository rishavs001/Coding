#include<stdio.h>
#include<stdlib.h>
void method1();
void method2();
void method3();
void method4();

int main()
{
    method1();
    method2();
    method3();
    method4();

    return 0;
}

void method1()
{
    //malloc randomm allocation
    int *ptr;
    ptr=(int *) malloc(5 * sizeof(int));

    ptr[0] =1;
    ptr[1] =3;
    ptr[2] =7;
    ptr[3] =9;
    ptr[4] =8;

    for(int i=0;i<5;i++)
    {
        printf("%d \n",ptr[i]);
    }
    
}
void method2()
{
// calloc- continuous allocation, initialized with 0

    int *ptr;
    ptr=(int *) calloc(5, sizeof(int));

    ptr[0] =1;
    ptr[1] =3;
    ptr[2] =7;
    ptr[3] =9;
    ptr[4] =8;

    for(int i=0;i<5;i++)
    {
        printf("%d \n",ptr[i]);
    }

}
void method3()
{
// free

    int *ptr;
    ptr=(int *) calloc(5, sizeof(int));

    ptr[0] =1;
    ptr[1] =3;
    ptr[2] =7;
    ptr[3] =9;
    ptr[4] =8;

    for(int i=0;i<5;i++)
    {
        printf("%d \n",ptr[i]);
    }

    free(ptr);

}
void method4()
{
// realloc

    int *ptr;
    ptr=(int *) calloc(5, sizeof(int));

    ptr[0] =1;
    ptr[1] =3;
    ptr[2] =7;
    ptr[3] =9;
    ptr[4] =8;

    realloc(ptr,8);
    ptr[0] =11;
    ptr[1] =3;
    ptr[2] =7;
    ptr[3] =9;
    ptr[4] =8;
    ptr[5] =11;
    ptr[6] =13;
    ptr[7] =17;
   

    for(int i=0;i<8;i++)
    {
        printf("%d \n",ptr[i]);
    }

  

}