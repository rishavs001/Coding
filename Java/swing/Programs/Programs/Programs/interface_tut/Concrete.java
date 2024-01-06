public class Concrete extends A implements I1, I2{
    public void m() {
        System.out.println("Within concrete m");
    }

    public int m1() {
        System.out.println("Within concrete m1");
        return 0;
    }

    public void m4() {
        System.out.println("Within concrete m4");
    }

    // Any variable declared within an interface are by default 
    // public static 
}
