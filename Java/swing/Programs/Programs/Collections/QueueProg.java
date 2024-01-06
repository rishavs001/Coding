import java.util.AbstractQueue;
import java.util.Comparator;
import java.util.Deque;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class QueueProg {
    public static void main(String[] args) {
        PriorityQueue<Integer> queue = new PriorityQueue<>(new Comparator<Integer>() {
            public int compare(Integer v1, Integer v2) {
                return (v2 - v1);
            }
        });
        
        // PriorityQueue<Integer> queue = new PriorityQueue<>();
        // Queue<Integer> queue = new LinkedList<>();        
        //Deque<Integer> deque = new LinkedList<>();

        int arr[] = {10, 23, 14, 89, 45, 70};
        for(int val : arr)
            queue.add(val);

        while(!queue.isEmpty())
            System.out.println(queue.poll());
    }
}
