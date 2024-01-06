package inst.nitjsr.test.pkg2;

import inst.nitjsr.test.pkg1.A;

public class Main {
    public static void main(String[] args) {
        A a = new A() {
            public void m2() {
                B b = new B();
                b.m1();
            }
        };

        a.m2();
    }
}

/*
 * A a = new B();
 * a.m2();
 */