#include<stdio.h>

int squarep(int *n); //  reference

int main()
{
    int n,s=0;
    printf("Enter a numbers \n");
    scanf("%d",&n);
    squarep(&n);   //passing address(actual)
    printf(" int func value  %d",n); //value of n in main function also changed since the value at that address is changed
    return 0;
}

int squarep (int *n)  //receiving addresss(formal)
{
    (*n) =(*n) * (*n); 
    printf("the square is :%d \n", *n);
}