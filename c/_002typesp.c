# include<stdio.h>
#include<math.h>  // for pow function
int main()
{
    // types and declaration of variables in C
    int age=22;   //integer
    float pi=3.14;  // real number
    char hashtag= '#'; //characters

    printf("age is %d \n", age);
    printf("Value of pi is %f \n", pi);
    printf("Value of pi is %0.1f \n", pi); // for 1 precision float value
    printf("Hashtag looks like is %c \n", hashtag);

    // single line comment tag
    /*
        this 
        is a 
        multiline
        comment tag
    */
   //input method
        int a,b,sum,power;
        printf(" enter a \n");
        scanf("%d",&a);
        printf(" enter b \n");
        scanf("%d",&b);

        sum=a+b;
        power=pow(b,a);  // power operation method
        printf("sum is %d \n",sum);
        printf("sum is %d \n",a+b);  //another way of writing
        printf("power value is %d \n",power); 
        printf("value is %d \n",3/2); // int returns only integer part
        printf("value now is %f \n",3.0/2); //use float to get exact value
    
    //explicit conversion
    int convert=(int) 5.8546;
    printf("%d", convert);
   
    return 0;
}