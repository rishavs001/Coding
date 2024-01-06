public class Reader implements DBEntity, DBEntity2 {

    private String name;
    private int age;

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public boolean insert(String query) {
        System.out.println("insert method of Reader");
        return true;
    }

    public boolean update(String query) {
        System.out.println("update method of Reader");
        return true;
    }

    public boolean delete(String query) {
        System.out.println("delete method of Reader");
        return true;
    }

    public DBEntity[] query(String condition) {
        DBEntity[] entities = new DBEntity[2];
        Reader r1 = new Reader();
        r1.setName("A");
        r1.setAge(30);
        entities[0] = r1;

        Reader r2 = new Reader();
        r2.setName("B");
        r2.setAge(35);
        entities[1] = r2;
        return entities;
    }

    public void m() {
        System.out.println("m implemented");
    }
}
