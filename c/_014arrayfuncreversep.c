#include<stdio.h>

void printNumbers(int *arr, int n); //(Also) int printNumbers(int arr[], int n);
void printReverse(int *arr, int n); // To print reverse of an array

int main()
{
    int arr[]={2,5,4,6,7};
    printNumbers(arr, 5);
    printReverse(arr,5);
    return 0;
}

void printNumbers(int *arr, int n) //(Also) void printNumbers(int arr[], int n)
{
for (int i = 0; i < 5; i++)
{
    printf("%d \n", arr[i]);
}
}
void printReverse(int *arr, int n)
{ 
    int i;
    printf("Reverse is\n");
    for ( i= 0; i < n/2; i++)
    {
        int firstval= arr[i];
        int lastval= arr[n-i-1];
        arr[i]=lastval;
        arr[n-i-1]=firstval;
       // printf("%d \n", arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
    printf("%d \n", arr[i]);
    }
}
