#include<stdio.h>

void withThird(int, int);
void withoutThird(int, int);

int main()
{
    int a,b;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);

    withThird(a,b);
    withoutThird(a,b);

    return 0;

}
void withThird(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping with third variable\na= %d\nb= %d\n",a,b);
}

void withoutThird(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping without third variable\na= %d\nb= %d",a,b);
}
