#include<stdio.h>

void printString(char arr[]);

int main()
{
    //  Two ways of initializing string
    char name[]={'R','I','S','H','A','V','\0'};
    char name1[]="SHAH";

    /*
    char *str= "Hello World";   <----can be reinitialized  using pointer
    char str[]= "Hello World";   <----cannot be reinitialized   using this array syntax
    */

   
    printString(name);
    printString(name1);
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] !='\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}