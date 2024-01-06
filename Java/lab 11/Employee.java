
public abstract class Employee{
   private
    String name;
    int id;
    String office;
    String designation;
    static int count=0;

    Employee(String name,int id,String office, String designation)
    {
        this.name = name;
        this.id = id;
        this.office = office;
        this.designation = designation;
        count++;
        
    }
    
    int getEmployeeCount(){
        return count;
    }

    abstract void insert();
    abstract void delete();

    static Employee getEmployee( String name, int id, String office, String designation) {
        if (designation=="Developer") {
            return new Developer(name, id, office, designation);
        } else if (designation=="Manager") {
            return new Manager(name, id, office, designation);
        }
        return null;
    }
}
public class Developer extends Employee{
    Developer(String name,int id,String office, String designation){
            super( name, id, office,  "developer");
            

    }
     void insert(){
                System.out.println("Data inserted in DEveloper");
            }
           void  delete(){
                System.out.println("Data deleted in DEveloper");
            }

}
public class Manager extends Employee{
        Manager(String name,int id,String office, String designation){
            super( name, id, office,  "Manager");

    }
    void insert(){
                System.out.println("Data inserted in DEveloper");
            }
           void  delete(){
                System.out.println("Data deleted in DEveloper");
            }
}