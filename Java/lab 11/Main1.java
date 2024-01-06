import java.util.*;
public class Main1 {

    public static int prime(int n)
    {
        for(int i=2;i*i<n;i++)
        {
            if(n%i==0)
            {
                return 0;

            }
        }
        return 1;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter number: ");
        int num= sc.nextInt();
        sc.close();
        int k=prime(num);
        if(k==0)
        {
            System.out.println("Not a prime");
        }
        else{
            System.out.println("Prime number");
        }

        
    }
}









































// public class Calculator<T extends Number>{
//     public double add(T a, T b) {
//         return a.doubleValue() + b.doubleValue();
//     }

//     public double subtract(T a, T b) {
//         return a.doubleValue() - b.doubleValue();
//     }

//     public double multiply(T a, T b) {
//         return a.doubleValue() * b.doubleValue();
//     }

//     public double divide(T a, T b) {
//         if (b.doubleValue() == 0) {
//             throw new ArithmeticException("Cannot divide by zero");
//         }
//         return a.doubleValue() / b.doubleValue();
//     }
// }

// public class Main1 {
//     public static void main(String[] args) {
        
//     }
    
// }

// //--------------

// // public class Calculator<T extends Number> {
// //     public double add(T a, T b) {
// //         return a.doubleValue() + b.doubleValue();
// //     }

// //     public double subtract(T a, T b) {
// //         return a.doubleValue() - b.doubleValue();
// //     }

// //     public double multiply(T a, T b) {
// //         return a.doubleValue() * b.doubleValue();
// //     }

// //     public double divide(T a, T b) {
// //         if (b.doubleValue() == 0) {
// //             throw new ArithmeticException("Cannot divide by zero");
// //         }
// //         return a.doubleValue() / b.doubleValue();
// //     }

// //     public int modulus(Integer a, Integer b) {
// //         if (!(a instanceof Integer && b instanceof Integer)) {
// //             throw new IllegalArgumentException("Modulus operation is only supported for integers");
// //         }
// //         if (b == 0) {
// //             throw new ArithmeticException("Cannot divide by zero");
// //         }
// //         return a % b;
// //     }
// // }


// // Sure, here is a simple main function that uses the `Calculator` class:

// // ```java
// // public class Main {
// //     public static void main(String[] args) {
// //         // Create a Calculator for Integer
// //         Calculator<Integer> intCalc = new Calculator<>();
// //         System.out.println("Integer Calculations:");
// //         System.out.println("Add: " + intCalc.add(5, 3));
// //         System.out.println("Subtract: " + intCalc.subtract(5, 3));
// //         System.out.println("Multiply: " + intCalc.multiply(5, 3));
// //         System.out.println("Divide: " + intCalc.divide(5, 3));
// //         System.out.println("Modulus: " + intCalc.modulus(5, 3));

// //         // Create a Calculator for Double
// //         Calculator<Double> doubleCalc = new Calculator<>();
// //         System.out.println("\nDouble Calculations:");
// //         System.out.println("Add: " + doubleCalc.add(5.5, 3.3));
// //         System.out.println("Subtract: " + doubleCalc.subtract(5.5, 3.3));
// //         System.out.println("Multiply: " + doubleCalc.multiply(5.5, 3.3));
// //         System.out.println("Divide: " + doubleCalc.divide(5.5, 3.3));
// //         try {
// //             System.out.println("Modulus: " + doubleCalc.modulus(5.5, 3.3));
// //         } catch (IllegalArgumentException e) {
// //             System.out.println("Modulus operation is not supported for doubles");
// //         }
// //     }
// // }
// // ```

// // This main function creates a `Calculator` for `Integer` and a `Calculator` for `Double`, performs various calculations with each, and prints the results. For the `Double` calculator, it tries to perform the modulus operation, catches the `IllegalArgumentException` that is thrown, and prints a message indicating that the modulus operation is not supported for doubles. This demonstrates how the `Calculator` class can be used with different types of numbers and how it handles invalid operations.