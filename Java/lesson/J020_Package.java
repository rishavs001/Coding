package lesson;

//    import java.util.*;  <----Universal package
import java.util.Scanner;

public class J020_Package {
     public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter username");

    String userName = sc.nextLine();

    sc.close();         //  close the scanner

    System.out.println("Username is: " + userName);
  }
    
}
