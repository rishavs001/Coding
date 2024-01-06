/*
 * Create an interface named Iface1. This interface must have at least one undefined method im1().
Create one private method of your choice, and create a default method named dm1() in the
interface. Now, let a concrete class named Concrete to implement the interface. Create an object
of the concrete class, and invoke im1 and dm1 from it. Concrete must implement im1, but it
should not override dm1.
*/

package labwork05;

interface Iface1 {
    void im1(); // Undefined method
 
    default void dm1() {
        System.out.println("Default method dm1() in Iface1");
    }
 
    private void privateMethod() {
        System.out.println("Private method in Iface1");
    }
}
 
class Concrete implements Iface1 {
    public void im1() {
        System.out.println("Implemented method im1() in Concrete");
    }
}
 
public class que01 {
    public static void main(String[] args) {
        Concrete concrete = new Concrete();
        concrete.im1(); // Invoke the implemented method im1()
        concrete.dm1(); // Invoke the default method dm1()
    }
}