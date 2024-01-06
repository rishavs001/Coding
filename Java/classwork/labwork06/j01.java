package labwork06;

import classwork.InvalidEntryException;

class InvalidEntryException extends Exception {
    public InvalidEntryException(String message) {
        super(message);
    }
    
    
    public String toString() {
        return "InvalidEntryException: " + getMessage();
    }
}

public class j01 {
    public static void main(String[] args) {
        try {
            throw new InvalidEntryException("This is an invalid entry.");
        } catch (InvalidEntryException e) {
            System.out.println(e.getMessage());  // Print only the message
            System.out.println(e);  // Print the whole exception
        }
    }
}
