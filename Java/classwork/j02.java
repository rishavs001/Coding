package classwork;


class InvalidEntryException extends Exception {
    public InvalidEntryException(String message) {
        super(message);
    }
}

class Person {
    private String name;
    private int age;

    public Person(String name, int age) throws InvalidEntryException {
        if (age < 0) {
            throw new InvalidEntryException("Age cannot be negative.");
        }
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

public class j02 {
    public static void main(String[] args) {
        try {
            // Creating Person objects with different age values
            Person person1 = new Person("Alice", 25);
            Person person2 = new Person("Bob", -5);  // This will throw an exception
            Person person3 = new Person("Carol", 30);

            // Accessing the properties of the valid Person objects
            System.out.println("Name: " + person1.getName() + ", Age: " + person1.getAge());
            System.out.println("Name: " + person3.getName() + ", Age: " + person3.getAge());
        } catch (InvalidEntryException e) {
            System.out.println("InvalidEntryException: " + e.getMessage());
        }
    }
}

