import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.NavigableSet;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

public class SetProg {
    public static void main(String[] args) {
    /*    NavigableSet<Integer> set = new TreeSet<>(new Comparator<Integer>() {
            public int compare(Integer v1, Integer v2) {
                return (v2 - v1);
            }
        }); */
        NavigableSet<Integer> set = new TreeSet<>();
        int[] arr = {12, 34, 15, 45, 15, 78, 34};

        for(int num : arr)
            set.add(num);

        // lower - <
        // floor - <=
        // ceiling - >=
        // higher - >
        SortedSet<Integer> head = set.subSet(15, false, 45, true);
        System.out.println("============================");

        NavigableSet<Integer> desSet = set.descendingSet();
        Iterator<Integer> it = set.descendingIterator();
        while(it.hasNext())
            System.out.println(it.next());
    }
}
