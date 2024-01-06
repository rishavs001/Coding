// Write a Java program that will read a string from user input, and will output the letters of the array
// along with its frequency in decreasing sequence of frequency, i.e., if user inputs “mississippi”, your
// program should output
//          i 4
//          s 4
//          p 2
//          m 1
// [If multiple letters appear to have same frequency, print them in their lexicographical order, i.e., in the
// example, i appeared before s]

package labwork01;

import java.util.*;

public class lab01_8 {
    public static void main(String args[])
    {
        System.out.println("Enter String: ");
        Scanner sc= new Scanner(System.in);
        String s=sc.nextLine();
        sc.close();
         Map<Character, Integer> frequencyMap = new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
        }



        List<Map.Entry<Character, Integer>> entries = new ArrayList<>(frequencyMap.entrySet());
        
        // Sort the entries based on frequency (and then lexicographical order)
        Collections.sort(entries, (a, b) -> {
            if (a.getValue().equals(b.getValue())) {
                return a.getKey().compareTo(b.getKey());
            }
            return b.getValue().compareTo(a.getValue());
        });


        
         for (Map.Entry<Character, Integer> entry : entries) {
             System.out.println(entry.getKey() + " " + entry.getValue());
    }
    
}

}