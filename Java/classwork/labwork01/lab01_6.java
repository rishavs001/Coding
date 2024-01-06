//Write a Java program to read an entire integer array from argument. Your program will then read an
// integer from user input via the terminal, and will determine whether the integer is a member of the
// array or not (searching algorithm).

package labwork01;

import java.util.Scanner;

public class lab01_6 {
    public static void main(String args[])
    {
        int n;  
    Scanner sc=new Scanner(System.in);  
    System.out.print("Enter the number of elements you want to store: ");   
    n=sc.nextInt();  
    int arr[]= new int[n];
    System.out.print("Enter "+ n +" array elements: ");
    for(int i=0;i<n;i++)
    {
        arr[i]=sc.nextInt();
    }
    System.out.println("Enter number to find");
    int num=sc.nextInt();
    sc.close();
    if(numPresent(arr,num))
    {
        System.out.println(num + " is Present");
    }
    else{
        System.out.println(num +" Not Present");
    }
    }
    public static boolean numPresent(int arr[],int num)
    {
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==num)
            {
                return true;
                
            }
        }
        return false;

    }
    
}
