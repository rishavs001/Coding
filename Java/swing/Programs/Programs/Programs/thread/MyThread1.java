public class MyThread1 implements Runnable {
    private Thread t;
    private Thread toWait;
    
    MyThread1(Thread toWait) throws InterruptedException {
        t = new Thread(this, "Demo Thread 1");
        this.toWait = toWait;
        t.start();
    }

    public void run() {
        try {
            for(int i=1; i <= 10; i++) {
                System.out.println("From " + Thread.currentThread().getName() + 
                                                " : " + i);
                Thread.sleep(1000);
            }

            toWait.join();
            System.out.println("Waiting on " + toWait.getName());
        } catch(InterruptedException e) {
            
        } 
    }

    public void join() throws InterruptedException {
        t.join();
    }

     public boolean isAlive() {
        return t.isAlive();
    }
}
