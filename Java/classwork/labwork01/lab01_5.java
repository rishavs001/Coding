//Write a Java program to read a string via argument, and output whether the string is palindromic or not

package labwork01;

import java.util.Scanner;


public class lab01_5 {
    public static void main(String args[])
    {
        String s;
        System.out.println("Enter String: ");
        Scanner sc= new Scanner(System.in);
        s=sc.nextLine();
        sc.close();
      
        if(isPalindrome(s))
        {
            System.out.println(s + " is Palindrome");
        }
        else
        {
            System.out.println(s + " is Not Palindrome");
        }
        
    }
 
    public static boolean isPalindrome(String str) {
    int left = 0, right = str.length() - 1;
        
        while(left < right)
        {
            if(str.charAt(left) != str.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
}
}

