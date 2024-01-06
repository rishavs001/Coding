#include<stdio.h>

int main()
{
    int a, b;
    int arr[100];
    int arr1[100];  // or int *arr;.... and %p
    int arr2[100];  // or int *arr;.... and %p
    int arr3[100];
    printf("Enter length of array A\n");
    scanf("%d",&a);
    printf("enter %d number of array A \n",a);
    for(int i=0;i<a;i++)
    {
        scanf("%d", &arr1[i]); //array is a pointer
    }
    printf("Enter length of array B\n");
    scanf("%d",&b);
    printf("enter %d number of array B \n",b);
    for(int i=0;i<b;i++)
    {
        scanf("%d", &arr2[i]); //array is a pointer
    }

    for(int i=0;i<a;i++)
    {
        arr[i]=arr1[i];
    }
    for(int i=0;i<b;i++)
    {
        arr[a+i]=arr2[i];
        
    }
        printf("Concatinated array \n");

    for(int i=0;i<(a+b);i++)
    {
        printf("  %d", arr[i]);
    }
int i,j,n;

    for (i = 0 ; i < (a+b-1) ; i++)
  {
    for ( j = 0 ; j < (a+b-1 - i); j++)
    {
      if (arr[j] < arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

      }
    }
  }
 
  printf("\nSorted list in decending order:\n");
 
  for (i = 0; i < (a+b); i++)
     printf("%d\t", arr[i]);

    return 0;


}