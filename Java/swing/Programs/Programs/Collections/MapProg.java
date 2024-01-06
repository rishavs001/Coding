import java.util.HashMap;
import java.util.*;

public class MapProg {
    public static void main(String[] args) {
        NavigableMap<Integer, String> map = new TreeMap<>();
        
        map.put(1, "Java");
        map.put(2,"Python");
        map.putIfAbsent(1, "C++");

        

        Set<Map.Entry<Integer, String>> entries = map.entrySet();

       // map.
        for(Map.Entry<Integer, String> entry : entries)
            System.out.println(entry.getKey() +  " " + entry.getValue());
    }
}
