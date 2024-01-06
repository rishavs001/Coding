#include<stdio.h>
  void method1();
  void method2();
  void method3();
int main()
{
    /*
    All THREE below function works. Comment off the one you want to use
    */
    // method1();
    // method2();
    // method3();
    
  return 0;
}
void method1()
{
 char name2[40];
    printf("Enter string \n");
       // Use %s to input or output whole of the string at once
    scanf("%s",name2);    // cannot input multi word strings
    printf(" The string is : %s \n",name2);    // prints till the first space  / omits the part  of string after the space
}

void method2()
{
    /*
   using gets and puts to resolve this issue of mutiword
   */
   printf("Enter String using gets & puts \n");
    char str[100];
    gets(str);
    printf("Output \n");
    puts(str);
        /*
        This method is outdated and dangerous
        So we use fgets now..
        */

}

void method3()
{
        //fgets(str,n,stdin)  <--stops when n-1 chars input or new line is engtered

    printf("Enter String using fgets & puts \n");
    char str[100];
    fgets(str, 100, stdin);
    printf("Output \n");
    puts(str);
}