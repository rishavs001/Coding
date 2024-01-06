
public interface DBEntity {
     delete(int a);
     insert(DBEntity a);
     update(DBEntity a, int b);
     static DBEntity createEntity(String entityType) {
        if ("Doctor".equalsIgnoreCase(entityType)) {
            return new Doctor();
        } else if ("Staff".equalsIgnoreCase(entityType)) {
            return new Staff();
        } else if ("Patient".equalsIgnoreCase(entityType)) {
            return new Patient();
        } else {
            throw new IllegalArgumentException("Invalid entity type");
        }
    }
    default void alter() {
        System.out.println("Implementation in progress");
    }
  
}
public class Doctor implements DBEntity{
    void insert(DBEntity a){
        System.out.println("Insert from Doctor");
    }
    void delete(int a){
        System.out.println("Delete from Doctor");
    }
    void update(DBEntity a, int b){
        System.out.println("Update from Doctor");
    }

}
public class Staff implements DBEntity{
    void insert(DBEntity a){
        System.out.println("Insert from Staff");
    }
    void delete(int a){
        System.out.println("Delete from Staff");
    }
    void update(DBEntity a, int b){
        System.out.println("Update from Staff");
    }
    
}
public class Patient implements DBEntity{
    void insert(DBEntity a){
        System.out.println("Insert from Patient");
    }
    void delete(int a){
        System.out.println("Delete from Patient");
    }
    void update(DBEntity a, int b){
        System.out.println("Update from Patient");
    }
    
}

public class Main3 {
   public static void main(String[] args) {
    
   } 
}
