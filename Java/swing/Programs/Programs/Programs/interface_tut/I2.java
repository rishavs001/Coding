public interface I2 {
    String dbName = "mysql";
    
    public void m3();
    public void m4();

    default void m6() {
        System.out.println("Within default implementation of m6 in I2");
    }
}
