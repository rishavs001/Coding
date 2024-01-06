public class Main {
    public static void main(String[] args) {
        Concrete c = new Concrete();
        c.m1();
        c.m3();

        System.out.println(I2.dbName);
        c.m6();
    }
}
