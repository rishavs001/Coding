#include<stdio.h>

int main()
{
    int arr[5];  // or int *arr;.... and %p
    printf("enter 5 number \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &arr[i]); //array is a pointer
    }

    for(int i=0;i<5;i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;


}