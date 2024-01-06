public class Child1 extends Parent{
    public Child1 (int value) {
        super(value); // Call to parameterized constructor of Parent
    }

    public void proc1(){
        System.out.println("Child class");
    }

    static {
        System.out.println("Static block in Child1");
    }

    {
        System.out.println("Non-static block in Child1");
    }

}