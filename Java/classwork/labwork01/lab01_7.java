// Write a Java program that will read a binary string from user input, and will convert it into a decimal.
// If the input is not binary, show an error “Input is not in proper format”. (in this assignment, simply print
// the error, in later course we will study how to throw an exception).

package labwork01;

import java.util.Scanner;
import java.lang.Math;
import java.lang.String;

public class lab01_7 {
    public static void main(String args[])
    {
        System.out.println("Enter Binary String");
        Scanner sc= new Scanner(System.in);
        String s=sc.nextLine();
        sc.close();
         int k=booldecim(s);
         if(k==-1)
         {
            System.out.println("Wrong Input");

         }
         else
         {
            System.out.println("Decimal Value is: "+ k);
         }
        
    }
    public static Integer booldecim(String s)
    {
        int decisum=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            int c=s.charAt(i)-'0';
            if(c!=0 && c!=1)
            {
                return -1; 
            }
            else if(c==1)
            {
               decisum+= Math.pow(2, (s.length()-i-1));
            }
        }
        return decisum;
    }
    
}
