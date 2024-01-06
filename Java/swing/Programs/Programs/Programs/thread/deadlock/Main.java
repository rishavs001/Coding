public class Main {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        Deadlock dl = new Deadlock(a, b);

        a.m1(b);
        System.out.println("Returned into main thread");
    }
}
