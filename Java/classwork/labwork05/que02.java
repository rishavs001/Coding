interface Iface1 {
    void im1(); // Undefined method

    default void dm1() {
        System.out.println("Default method dm1() in Iface1");
    }

    static Iface1 createConcrete() {
        return new Concrete();
    }

    static Iface1 createConcrete2() {
        return new Concrete2();
    }
}

class Concrete implements Iface1 {

    public void im1() {
        System.out.println("Implemented method im1() in Concrete");
    }
}

class Concrete2 implements Iface1 {

    public void im1() {
        System.out.println("Implemented method im1() in Concrete2");
    }

    public void dm1() {
        System.out.println("Overridden method dm1() in Concrete2");
    }
}

public class que02 {
    public static void main(String[] args) {
        Iface1 concrete = Iface1.createConcrete();
        Iface1 concrete2 = Iface1.createConcrete2();

        concrete.im1(); // Invoke im1() from Concrete
        concrete.dm1();

        concrete2.im1(); // Invoke im2() from Concrete
        concrete2.dm1();
    }
}