public class Main {
    public static void main(String[] args) {
        Doctor d = (Doctor)DBEntity.getEntity("doctor");
        d.setId("1");
        d.setName("A");
        d.setSpec("Neuro");
        d.insert(d);
    }
}
