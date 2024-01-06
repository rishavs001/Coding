#include<stdio.h>
int sum(int a, int b);

int main()
{
    int a,b,s=0;
    printf("Enter two numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    s=sum( a, b); // passing arguments
    printf("The sum is: %d",s);
    return 0;
}
int sum( int a, int b)  // receiving parameters
{
    int c=a+b;
    return c;  //return a+b;  <---this could have written too
    /*
        1. function can return only one value at a time
        2. changes to parameters in function fdonot change the values in calling function since a COPY of argument is sent before.
    */
}