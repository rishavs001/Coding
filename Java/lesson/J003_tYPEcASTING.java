/*
 Widening Casting (automatically) - converting a smaller type to a larger type size
byte -> short -> char -> int -> long -> float -> double

Narrowing Casting (manually) - converting a larger type to a smaller size type
double -> float -> long -> int -> char -> short -> byte
 */
package lesson;

 public class J003_tYPEcASTING{
    public static void main(String args[])
    {
        //Widening casting is done automatically when passing a smaller size type to a larger size type
        int myInt = 9;
        double myDouble = myInt; // Automatic casting: int to double

        System.out.println(myInt);      // Outputs 9
        System.out.println(myDouble);   // Outputs 9.0



        //Narrowing casting must be done manually by placing the type in parentheses in front of the value
        double myDoubley = 9.78d;
        int myInti = (int) myDouble; // Manual casting: double to int

        System.out.println(myDoubley);   // Outputs 9.78
        System.out.println(myInti);      // Outputs 9
    }
 }