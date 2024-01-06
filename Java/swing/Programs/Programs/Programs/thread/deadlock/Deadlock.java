public class Deadlock implements Runnable {
    private A a;
    private B b;
    private Thread t;

    Deadlock(A a, B b) {
        this.a = a;
        this.b = b;
        t = new Thread(this, "Racing thread");
        t.start();
    }
    
    public void run() {
        b.m2(a);
        System.out.println("Returned into racing thread");
    }
}
