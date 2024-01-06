import java.io.FileNotFoundException;

public class A {
    int b;

    A(int b) {
        this.b = b;
    }

    public void m1() throws FileNotFoundException {
        throw new FileNotFoundException("testing");
       // int a = 0;
       // int b = 12/a;
    }
}