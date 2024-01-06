public class Doctor implements DBEntity {
    String id;
    String name;
    String spec;

    public void setId(String id) {
        this.id = id;
    }

     public void setName(String name) {
        this.name = name;
    }

     public void setSpec(String spec) {
        this.spec = spec;
    }

    public void insert(DBEntity entity) {
        Doctor d = (Doctor)entity;
        System.out.println("Insertiing doctor with id " + d.id + " into database");
    }

}
