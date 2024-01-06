#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    int _age= *ptr;
    int **pptr= &ptr;       // pointer to pointer
    printf("%d \n",_age);
    printf("%p \n",&age);   //  %p gives hexadecimal value of address
    printf("%u \n",&age);   //  %u gives unsigned integer value of address
    printf("%d \n",**pptr); // printing pointer to pointer
    (*ptr)++;
    _age= *ptr;
    printf("%d \n",_age);
    printf("%d \n",*ptr);
 

   // age=22;
   //*ptr=&age;
    printf("ptr= %u\n",ptr);
    ptr++;                 //increases the address of pointer by its data type size  (4 for integer and so on)
    printf("ptr= %u\n",ptr);
    ptr--;
    printf("ptr= %u\n",ptr);
    return 0;
}


//      