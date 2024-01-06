package labwork02;


abstract class Employee {
    protected String name;
    protected int id;
    protected String office;
    protected String designation;

    public Employee(String name, int id, String office, String designation) {
        this.name = name;
        this.id = id;
        this.office = office;
        this.designation = designation;
    }

    public abstract void insert();

    public abstract void delete();

    public static Employee getEmployee(String type, String name, int id, String office) {
        if (type.equalsIgnoreCase("Developer")) {
            return new Developer(name, id, office);
        } else if (type.equalsIgnoreCase("Manager")) {
            return new Manager(name, id, office);
        }
        return null;
    }
}

class Developer extends Employee {
    public Developer(String name, int id, String office) {
        super(name, id, office, "Developer");
    }

    @Override
    public void insert() {
        System.out.println("Data inserted in Developer database");
    }

    @Override
    public void delete() {
        System.out.println("Data deleted from Developer database");
    }
}

class Manager extends Employee {
    public Manager(String name, int id, String office) {
        super(name, id, office, "Manager");
    }

    @Override
    public void insert() {
        System.out.println("Data inserted in Manager database");
    }

    @Override
    public void delete() {
        System.out.println("Data deleted from Manager database");
    }
}

public class EmployeeMain {
    public static void main(String[] args) {
        Employee employee1 = Employee.getEmployee("Developer", "John", 101, "Office A");
        Employee employee2 = Employee.getEmployee("Manager", "Alice", 102, "Office B");

        // Dynamic Method Dispatch
        employee1.insert(); // Output: Data inserted in Developer database
        employee1.delete(); // Output: Data deleted from Developer database

        employee2.insert(); // Output: Data inserted in Manager database
        employee2.delete(); // Output: Data deleted from Manager database
    }
}


// class Employee {
//     String name;
//     int id;
//     String office;
//     String designation;

//     Employee(String name, int id, String office, String designation) {
//         this.name = name;
//         this.id = id;
//         this.office = office;
//         this.designation = designation;
//     }

  
// }

// class Developer extends Employee {
//     Developer(String name, int id, String office) {
//         super(name, id, office, "developer");
//     }
// }

// class Manager extends Employee {
//     Manager(String name, int id, String office) {
//         super(name, id, office, "manager");
//         }    }

// class EmployeeMain{

//     public static void main(String[] args) {
//         Developer devEmployee = new Developer("John Doe", 101, "Office A");
//         Manager managerEmployee = new Manager("Jane Smith", 201, "Office B");

//         System.out.println("Developer: " + devEmployee.name + ", " + devEmployee.id + ", " + devEmployee.office + ", " + devEmployee.designation);
//         System.out.println("Manager: " + managerEmployee.name + ", " + managerEmployee.id + ", " + managerEmployee.office + ", " + managerEmployee.designation);
//     }

// }