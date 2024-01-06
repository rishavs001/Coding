//Write a Java program that will read three doubles from argument as a,b and c. Determine the roots of the polynomial ax2 + bx + c = 0.
// If the roots are complex, show them accordingly. As for example,
// “java Main 2 -3 7” will output “0.75+1.713913650100261i 0.75-1.713913650100261i"

package labwork01;

import java.util.*;

public class lab01_10 {
    public static void main(String args[])
    {
        System.out.println("Enter A B and C: ");
        Scanner sc= new Scanner(System.in);
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        sc.close();

         double discriminant = b * b - 4 * a * c;

         if (discriminant > 0) {
            double root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
            double root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
            System.out.println(root1 + " " + root2);
        } else if (discriminant == 0) {
            double root = -b / (2 * a);
            System.out.println(root);
        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = Math.sqrt(-discriminant) / (2 * a);
            System.out.println(realPart + "+" + imaginaryPart + "i " + realPart + "-" + imaginaryPart + "i");
        }
    }
    
}

