# include<stdio.h>
int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
   
    if(a%2==0)
    {
        printf("Even digit nummber \n");
    }
    else
    {
    printf("Odd digit number \n");
    }
    
    //ternary operator
    a%2==0 ? printf("Even digit nummber \n") : printf("Odd digit number \n");
  
    return 0;
}