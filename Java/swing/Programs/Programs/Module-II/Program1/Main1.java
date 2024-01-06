import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;

public class Main1 {
    private static void m1() throws FileNotFoundException {
        throw new FileNotFoundException("NaN");
    }

    public static void main(String[] args) throws FileNotFoundException {
        m1();
    } 
}
