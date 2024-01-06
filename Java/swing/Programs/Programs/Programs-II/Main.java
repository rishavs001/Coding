import java.io.FileNotFoundException;

public class Main {
    public static void main(String[] args) {
        A a = new A(12);
        try {
            int b = 12/0;
            throw new FileNotFoundException("No file");
        } catch (Exception e) {
            System.out.println("FNF Exception occurred");
        } catch(ArithmeticException e1) {
            System.out.println("AE occurred");
        }
        System.out.println("This will not be printed");
    }
}

// clone() method returns Object type variable
// Object clone() {}, the Object type is being assigned to A type variable
// equals() method returns whether two objects are equal or not
// hashCode() returns hash code of the object
// finalize() gets called when garbage collection happens
// wait(), notify() and notifyAll() will be discussed in Multithreading