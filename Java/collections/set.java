// // Create a List of Strings in Java. Then using Set of Character, determine the number of
// // unique characters in each String in the List.

// import java.util.ArrayList;
// import java.util.HashSet;
// import java.util.List;
// import java.util.Set;

// public class set {

//         public int count( String s)
//         {
//             Set<Character> set1= new HashSet<Character>();
//             for (char c : s.toCharArray())
//             {
//                 set1.add(c);
//             }

//             return(set1.size());

//         }
//     public static void main(String[] args) {
//         List<String> ls= new ArrayList<String>("Hello", "World", "Java", "Programming");
//         ls.add("AVCD");
//         ls.add("YGDEIDEB");
        
//         for (String str : ls) {
//           //  int x= str.count();
//             System.out.println(str);
//         }



//     // Set<Character> s= new HashSet<Character>();

//     }
    
// }


// //--------------------------------

import java.util.*;

public class set {
    public static void main(String[] args) {
        // Create a List of Strings
        List<String> list = Arrays.asList("Hello", "World", "Java", "Programming");

        // For each String in the list
        for (String str : list) {
            // Create a Set of Characters
            Set<Character> uniqueChars = new HashSet<>();

            // Add each character in the string to the set
            for (char c : str.toCharArray()) {
                uniqueChars.add(c);
            }

            // Print the number of unique characters in the string
            System.out.println("The string \"" + str + "\" has " + uniqueChars.size() + " unique characters.");
        }
    }
}

