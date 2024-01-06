public class Consumer implements Runnable {
    private Thread t;
    private Data data;

    Consumer(Data data) {
        t = new Thread(this, "Producer");
        this.data = data;
        t.start();
    }

    public void run() {
        try {
            for(int i=1; i <= 20; i++) {
                data.get();
                Thread.sleep(1000);
            }
        } catch(InterruptedException e) {
            
        }
    } 
}

/*
 * wait() lets current thread to sleep as long as another thread
 * does not call notify() or notifyAll()
 * in notify(), only one of the waiting threads will wake up
 * in notifyAll(), all waiting threads will wake up
 */