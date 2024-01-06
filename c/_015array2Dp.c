// Table of 2 & 3

#include<stdio.h>

void tables(int arr[][10], int n, int m, int number);

int main()
{
    int storetable[2][10];
    tables(storetable, 0,10,2);
    tables(storetable, 1,10,3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t",storetable[0][i]);   //printing (o,n) postion elements
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t",storetable[1][i]);   //printing (1,n) postion elements
    }
    
    return 0;
}

void tables(int arr[][10], int n, int m, int number)   //always define second dimention
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i]= number * (i+1);
    }
    
}