package classwork.lab6;

public class A {
    public int publicVarA = 1;

    int packagePrivateVarA = 2;

    protected int protectedVarA = 3;

    private int privateVarA = 4;

    public A() {
        System.out.println("Inside class A constructor");
        System.out.println("publicVarA: " + publicVarA);
        System.out.println("packagePrivateVarA: " + packagePrivateVarA);
        System.out.println("protectedVarA: " + protectedVarA);
        System.out.println("privateVarA: " + privateVarA);

        B innerB = new B();
        innerB.accessVariablesInB();
    }

    private class B {
        public B() {
            System.out.println("Inside class B constructor");
        }

        public void accessVariablesInB() {
            System.out.println("Accessing variables from class A inside class B:");
            System.out.println("publicVarA: " + publicVarA);
            System.out.println("packagePrivateVarA: " + packagePrivateVarA);
            System.out.println("protectedVarA: " + protectedVarA);
            System.out.println("privateVarA: " + privateVarA);

            A outerA = new A();
            System.out.println("\nAccessing variables from class B via an instance of class A:");
            System.out.println("publicVarA: " + outerA.publicVarA);
            System.out.println("packagePrivateVarA: " + outerA.packagePrivateVarA);
            System.out.println("protectedVarA: " + outerA.protectedVarA);
        }
    }

    public static void main(String[] args) {
        new A();
    }
}

