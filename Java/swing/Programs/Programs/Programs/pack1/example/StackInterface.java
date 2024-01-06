public interface StackInterface {
    void push(int x);
    int pop();

    default void clear() {
        m3();
        System.out.println("Clear is not implemented");
    }

    static void m2() {
        System.out.println("Defined within m2 of interface");
    }

    private void m3() {
        System.out.println("Defined within private m3 of interface");
    }
}

// All methods declared or defined within an interface, except the private methods,
// are by default public.
// Access specifier cannot be reduced in overridden method.
// public, protected, default, private