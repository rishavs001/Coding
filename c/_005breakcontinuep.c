# include<stdio.h>
int main()
{ 
    int n;
   do
   {
    printf("Enter number \n");
    scanf("%d",&n);
    printf("Number is %d \n",n);

    if (n == 0)
    {
        break; // to exit totally at anytime
    }
    
   } while (1); //always true so never ending loop
   printf("Thank You \n");
   
   for (int i = 0; i <= 5; i++)
   {
    
    if (i == 3)
    {
        continue; // to skip one step at anytime
    } printf("i= %d \n",i);
   }
   
    return 0;
}