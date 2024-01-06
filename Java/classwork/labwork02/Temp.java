abstract class Example{
    abstract void method1();
}

// public interface Interface {
//     void method12();
// }
public class Temp {
    public static void main(String[] args) {
        Example e=new Example(){
            void method1(){
                System.out.println("abstract method");
            }
        };
        e.method1();
    }
}
