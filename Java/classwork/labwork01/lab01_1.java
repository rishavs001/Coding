// Write a Java program to read an integer as input from user, and output whether the number is prime or composite

package labwork01;

import java.util.Scanner;

public class lab01_1 {
    public static void main(String[] args) {
        int num;
        boolean flag=false;
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter number: ");
        num= sc.nextInt();
        sc.close();
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=true;
                break;
                
            }
            
        }
        if(!flag)
            {
                System.out.println(num+" is Prime");
            }
            else
            {
                System.out.println(num +" is Composite");
            }

    }
}