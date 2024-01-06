// Write a Java program that will read two doubles from arguments, and will read an arithmetic
// operation symbol as a string from user input via terminal (*, /. %, +, -). Using switch-case on the read
// input, show the result of corresponding calculation

package labwork01;

import java.util.*;

public class lab01_9 {
    public static void main(String args[])
    {
        System.out.println("Enter A and B: ");
        Scanner sc= new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("Enter operation{ + - * / %} : ");
        char ch = sc.next().charAt(0);
        sc.close();
        switch(ch)
        {
            case '+':
                
                System.out.println(a+b);
                break;
            case '-':
                System.out.println(a-b);
                break;
            case '*':
                System.out.println(a*b);
                break;
            case '/':
                System.out.println(a/b);
                break;
            case '%':
                System.out.println(a%b);
                break;
        }
      
    }
    

    }
