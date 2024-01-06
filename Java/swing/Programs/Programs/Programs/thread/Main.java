import java.util.concurrent.ArrayBlockingQueue;
import java.util.*;

 class ThreadSafeStack<T> {
    private ArrayBlockingQueue<T> stack;

    public ThreadSafeStack() {
        stack = new ArrayBlockingQueue<>(10);
    }

    public void push(T item) throws InterruptedException {
        stack.put(item);
    }

    public T pop() throws InterruptedException {
        return stack.take();
    }
}
 public class Main {
    public static void main(String[] args) {
        ThreadSafeStack<Integer> stack = new ThreadSafeStack<>();

        Thread pushThread = new Thread() {
            @Override
            public void run() {
                try {
                    for (int i = 1; i <= 10; i++) {
                        stack.push(i);
                        System.out.println("Pushed: " + i);
                        Thread.sleep(500); // Simulate work
                    }
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        };

        Thread popThread = new Thread() {
            @Override
            public void run() {
                try {
                    for (int i = 1; i <= 10; i++) {
                        int value = stack.pop();
                        System.out.println("Popped: " + value);
                        Thread.sleep(500); // Simulate work
                    }
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        };

        pushThread.start();
        popThread.start();
    }
}