// Write a Java program to read an integer as input from user, and output its factorial.

package labwork01;


import java.util.Scanner;

public class lab01_2 {
    public static void main(String[] args) {
        long  num,fact=1;
       
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter number: ");
        num = sc.nextInt();
        sc.close();
        for(int i=2;i<=num;i++)
        {
             fact=fact*i;
        }
       
            System.out.println("Factorial is: "+fact);
            

    }
    
}
