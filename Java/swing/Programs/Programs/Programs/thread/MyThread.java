public class MyThread extends Thread {
    private Demo demo;
    private String msg;
    private boolean toPrint;

    MyThread(Demo demo, String msg, boolean toPrint) {
        super("Demo Thread");
        this.demo = demo;
        this.msg = msg;
        this.toPrint = toPrint;
    }

    public void run() {
        synchronized(demo) {
            demo.print(msg);
        }
    }
}
