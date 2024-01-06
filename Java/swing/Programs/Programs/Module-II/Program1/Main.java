import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;

public class Main {
    private static void m() throws RuntimeException {
       try {
           // FileReader reader = new FileReader(new File("C:\\test.txt"));

            // reading bytes and operating
            int a = 0;
            int b = 12/a;
       } catch(ArithmeticException e) {
            System.out.println("Within AE");
            RuntimeException re = new RuntimeException("Thrown from catch of AE");
            re.initCause(e);
            throw re;
        }
    }

    public static void main(String[] args) {
        try {
            throw new OwnException("Own exception thrown");
        } catch(OwnException e) {
            System.out.println(e);
        //    System.out.println(e.getCause());
        }
        
    }
}

// Two types of runtime errors: (1) Error - needs complete alteration of logic to handle.
// (2) Exception - that can be handled elegantly.
// Both of them are subclass of Throwable class
// If an exception is not handled manually, JRE will do the job
// In such case, it will print a stack trace, and will exit from the program altogether
// <Exception message>
//      at <class>.<method> (<file>:<line>)
// Throwable -> Exception -> All exceptions are coming
//           -> Error (we are not going to handle it)