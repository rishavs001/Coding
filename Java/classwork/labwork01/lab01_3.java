//Write a Java program to read an integer via argument, let the variable be n, and output a Fibonacci series of length n.

package labwork01;

import java.util.Scanner;

public class lab01_3 {
    public static void main(String[] args)
    {
        int n,a=0,b=1;
        System.out.println("Enter number");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        sc.close();
        if(n==1)
        {
            System.out.println(a);
        }
        else if(n==2)
        {
            System.out.println(a);
            System.out.println(b);
        }
        else
        {
        int i=3;
        System.out.println(a);
        System.out.println(b);
        while(i<=n)
        {
            int c=a+b;
            System.out.println(c);
            a=b;
            b=c;
            i++;
        }

    }
    }
    
}
