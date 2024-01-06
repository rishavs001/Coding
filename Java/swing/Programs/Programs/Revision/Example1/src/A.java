package inst.nitjsr.test.pkg1;

public class A {
    protected class B {
        public B() {}
        public void m1() {
            System.out.println("Within m2 of B");
        }
    }

    public void m2() {};
}
