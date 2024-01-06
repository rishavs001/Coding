#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("The sum is %d", a+b);
    printf("\nDifference is %d",a-b);
    printf("\nMultiplication is %d",a*b);
    printf("\nDivision is %d",a/b);
    printf("\nModulus is %d",a%b);

    return 0;
}