// Create a class named Person storing any informa8on (such as name, address, job,
// office etc.). Create a List of several Persons. [Use List<Person> persons = new
// ArrayList<>(), and then add each person one by one]. Then traverse through the list
// and print the informa8on of each person in the list.

import java.util.ArrayList;
import java.util.List;

// Define the Person class
class Person {
    String name;
    String address;
    String job;
    String office;

    // Constructor
    public Person(String name, String address, String job, String office) {
        this.name = name;
        this.address = address;
        this.job = job;
        this.office = office;
    }

    // Method to print person details
    public void printPerson() {
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("Job: " + job);
        System.out.println("Office: " + office);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create a list of persons
        List<Person> persons = new ArrayList<>();

        // Add persons to the list
        persons.add(new Person("John Doe", "123 Main St", "Software Engineer", "XYZ Corp"));
        persons.add(new Person("Jane Smith", "456 Maple Ave", "Doctor", "ABC Hospital"));

        // Traverse the list and print each person's information
        for (Person person : persons) {
            person.printPerson();
            System.out.println();
        }
    }
}
