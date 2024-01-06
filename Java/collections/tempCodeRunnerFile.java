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
