#include<stdio.h>
void printhello(); //function declarartion
void indian();
void french();

int main()
{
    char n;
    printhello(); //function call
      scanf("%c",&n);
    if (n=='i')
    {
        indian();
    }
    else if(n=='f')
    {
        french();
    }
    else
    {
        printf("Invaid choice");
    }
    
    return 0;
}

void printhello() //function definition
{ 
    printf("Hello Rishav \n Enter nationality (i for indian & f for french) \n");
   
}

void indian()
{
    printf("Namaste");
}

void french()
{
    printf("Bonjour");
}