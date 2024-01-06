#include<stdio.h>
int recur(int n);
int main()
{ int n;
    printf("Enter number \n");
    scanf("%d",&n);
    recur(n);
    return 0;
}

int recur (int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
    printf("Back tracing %d \n",n);
    recur(n-1);
    }
}

/*
Another way of doing


#include<stdio.h>
void recur(int n);  <------changed to void
int main()
{ int n;
    printf("Enter number \n");
    scanf("%d",&n);
    recur(n);
    return;   <------changed
}

void recur (int n)   <-------changed
{
    if (n==0)
    {
        return 0;
    }
    
    printf("Back tracing %d \n",n);
    recur(n-1);
}
*/