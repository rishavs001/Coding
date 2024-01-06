package classwork.lab6;
public class A {
    // Public variable in class A
    public int publicVarA = 1;

    // Package-private variable in class A
    int packagePrivateVarA = 2;

    // Protected variable in class A
    protected int protectedVarA = 3;

    // Private variable in class A
    private int privateVarA = 4;

    // Constructor for class A
    public A() {
        System.out.println("Inside class A constructor");
        System.out.println("publicVarA: " + publicVarA);
        System.out.println("packagePrivateVarA: " + packagePrivateVarA);
        System.out.println("protectedVarA: " + protectedVarA);
        System.out.println("privateVarA: " + privateVarA);

        // Create an instance of inner class B and access its variables
        B innerB = new B();
        innerB.accessVariablesInB();
    }

    // Inner class B
    private class B {
        // Constructor for class B
        public B() {
            System.out.println("Inside class B constructor");
        }

        // Method to access variables from class A
        public void accessVariablesInB() {
            // Accessing variables from class A directly
            System.out.println("Accessing variables from class A inside class B:");
            System.out.println("publicVarA: " + publicVarA);
            System.out.println("packagePrivateVarA: " + packagePrivateVarA);
            System.out.println("protectedVarA: " + protectedVarA);
            System.out.println("privateVarA: " + privateVarA);

            // Creating an instance of class A and accessing its variables
            A outerA = new A();
            System.out.println("\nAccessing variables from class B via an instance of class A:");
            System.out.println("publicVarA: " + outerA.publicVarA);
            System.out.println("packagePrivateVarA: " + outerA.packagePrivateVarA);
            System.out.println("protectedVarA: " + outerA.protectedVarA);
            // Private variable privateVarA is not accessible from outside class A
        }
    }

    // Main method to test the classes
    public static void main(String[] args) {
        new A();
    }
}
